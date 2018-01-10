#include <iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int x[n],y[n];
		for(int i=0;i<n;i++)
		{
			cin>>x[i];
		}
		
		for(int i=0;i<n;i++)
		{
			cin>>y[i];
		}
		int sum1=0,sum2=0;
		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			sum1=sum1+x[i];
			else
			sum1=sum1+y[i];
			
			
			if(i%2==0)
			sum2=sum2+y[i];
			else
			sum2=sum2+x[i];
			
		}
		(sum1<sum2)?cout<<sum1<<endl:cout<<sum2<<endl;
		
	}
}

