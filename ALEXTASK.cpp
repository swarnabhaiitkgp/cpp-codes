
#include <iostream>
using namespace std;
long long int lc(long long int ,long long int );
int main()
{
    long long int t,n,i,j,k,a[1000],l[249500],temp=100000000;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		k=0;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				l[k]=lc(a[i],a[j]);
				k++;
			}
		}
	   for(i=0;i<k;i++)
	   { //cout<< l[i]<<endl;
	   	if(l[i]<temp)
	   	{
	   	   temp=l[i];
		}
	/*	else
		{
			continue ;
		}*/
	   }
	   cout<<temp;
	   cout<<"\n";
	   temp=100000000;
    	
	}
	return 0;
}
long long int lc(long long int a, long long int b)
{
    int x,gcd,lc;
	for(x=1;x<=a && x<=b;++x)
	{
		if(a%x==0 && b%x==0)
		{
			gcd=x;
		}
	}
	lc=(a*b)/gcd;
}
