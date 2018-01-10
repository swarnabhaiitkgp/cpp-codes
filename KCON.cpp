#include <iostream>
#include <climits>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
long long int MaxSubarray(int arr[],int n)
{
	long long int dp[n];
	dp[0]=arr[0];
	long long int max1=dp[0];
	for(long long int i=1;i<n;i++)
	{
	    dp[i]=max((dp[i-1]+arr[i]),(long long int)arr[i]);
	    if(dp[i]>max1)
	    max1=dp[i];
	}
	return max1;
}
 
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n,k;
		cin >> n >> k;
		int arr[n];
		for(int i=0;i<n;i++)
		{ 
			cin >> arr[i];
		}
		
		long long int _suffix=INT_MIN,_prefix=INT_MIN,s=0;
		for(int i=0;i<n;i++)
		{
			s+=arr[i];
			if(s > _prefix)
			_prefix=s;
		}
		
		long long int temp=0;
		for(long long int i=n-1;i>=0;i--)
		{
			temp+=arr[i];
			if(temp > _suffix)
			_suffix=temp;
		}
		
		long long int MAXarr = MaxSubarray(arr,n);
		//cout<<_prefix<<"  "<<_suffix<<endl;
		//cout<<MAXarr<<endl;
		if(k==1)
			cout<<MAXarr<<endl;
		else
		{
			if(s<0)
				cout<<max(MAXarr,(_prefix+_suffix))<<endl;
			else
				cout<<max((k-2)*s+_prefix+_suffix,MAXarr)<<endl;
		}
	}
	return 0;
}  
