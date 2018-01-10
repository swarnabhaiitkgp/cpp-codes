#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
		string a,b;
		int flag=0,zc=0,oc=0;
		cin >> a >> b;
		for(int i=0;i<a.size();i++)
		{
			if(a.at(i)!=a.at(0))
			flag =1;
			if(a.at(i)!=b.at(i))
			{
				if(a.at(i)=='0')
				zc++;
				if(a.at(i)=='1')
				oc++;
				
				
			}
			
		}
		if(flag==0)
		cout<< "Unlucky Chef"<<endl;
		else
		cout<<"Lucky Chef"<<endl<<max(zc,oc)<<endl;
	}
}
