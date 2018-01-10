#include <iostream>
using namespace std;
long long int gcd(long long int a,long long int b)
{
	long long int gcd;long long int j;
	for( j=1; j <= a && j <= b; ++j)
          {
       
             if(b%j==0 && a%j==0)
               gcd = j;
          }
          return j;
}
int main()
{
	int t;
	cin>> t;
	while (t--)
	{
		long long int N;
		cin >> N;
		long long int a[N];
		long long int dp1[N]={0};
		long long int dp2[N]={0};
		dp1[0]=1;
		dp2[0]=0;
		for(int i=1;i<N;i++)
		{
			if(gcd(a[i],a[i-1])==1)
			dp1[i]=dp2[i-1]++;
			else
			dp1[i]=max(dp2[i-1],dp1[i-1])+1;
			dp2[i]=max(dp1[i-1],dp2[i-1]);
		}
		long long int ans=max(dp1[N],dp2[N]);
		cout<< ans <<endl;
	}
	
	return 0;
}
