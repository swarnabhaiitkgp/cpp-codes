#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n);
		int arr[MAX];
		
		for(int i=0;i<n;i++)
		{
			for(int j=2;;j++)
			{
				while(a[i]%j==0)
				{
					a[i]=a[i]/j;
					arr[j]++;
				}
				if(arr[j]%2==0)
			 } 
		}
	}
	return 0;
}
