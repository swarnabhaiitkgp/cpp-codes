#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin>>t;
	for(long long i=0;i<t;i++)
	{
		long long j,k,d1,d2=10000000000,s[100100],n,p;
		cin>>n;
		for(j=1;j<=n;j++)
			cin>>s[j];
		for(j=1;j<=n;j++)
		{
			for(k=j+1;k<=n;k++)
			{
				d1=abs(s[k]-s[j]);
				if(d1<=d2)
				{
					d2=d1;
				}
			}
	   	}
	   	cout<<d2<<endl;
	}
	return 0;
}
