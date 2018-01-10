#include <iostream>
#include <vector>

using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin >> n;
		int p[n+1];
	//	int teleport[n+1][n+1]={0};
		int a,b;
		for(int i=1;i<=n;i++)
		     cin>>p[i];
		for(int j=1;j<=n-1;j++)
		    {
		    	cin>> a >> b;
		    	teleport[a][b]=1;
		    	teleport[b][a]=1;
			 }
			  
			//output
			for(int i=1;i<=n;i++)
			{   int max=0;int jmax=0;
			    for(int j=1;j<=n;j++)
				{
					if(i!=j && teleport[i][j]==0)
					{
						if(p[j]>=max)
					 {
						 max=p[j];
						jmax=j;
			         }
					}
					
				}
					cout << jmax << " ";
			}      
		   cout<<endl;
		  /*for(int i=1;i<=n;i++)  
		     {
			   for(int j=1;j<=n;j++)
		      { 
			  cout<< teleport[i][j]<< " " ;
		      }
			  cout<<endl;
		     }*/
	}
	
	
	
	
	return 0;
	
}
