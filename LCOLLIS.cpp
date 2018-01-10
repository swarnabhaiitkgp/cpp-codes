#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int m,n;
		cin >> n >> m;
		char adj[n][m];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				cin>> adj[i][j];
			}
		}
		int sum=0;int c;
		for(int j=0;j<m;j++)
		{ 
		   c=0;
			for(int i=0;i<n;i++)
			{
				cout<< adj[i][j];
				if(adj[i][j]=='1')
					c++;
		    }
					cout<<endl<<c <<endl		;	
				sum=sum+(c*(c-1))/2;
			
		}
		cout<< sum<< endl;
		
	}
	return 0;
}
