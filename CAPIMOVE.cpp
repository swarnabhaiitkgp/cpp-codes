#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{
		int n;
		cin >> n;
		set <pair<int,int> > s;
		int p[n+1];
		for(int i=1;i<=n;i++)
		{
			cin>> p[i];
			s.insert({p[i],i});
		}
	    vector<int> teleport[n+1];
	    
		int a,b;
		    
		     		for(int j=1;j<=n-1;j++)
		           {
		            	cin>> a >> b;
		            	teleport[a].push_back(b);
		            	teleport[b].push_back(a);
			       }
			 
			// cout << "done";
	
			  
			//output
			set <pair<int,int>>::iterator it;
			for(int i=1;i<=n;i++)
			{   
			    s.erase({p[i],i});
			    for(int j=0;j<teleport[i].size();j++)
				{
					//it=s.find(p[teleport[i][j]]);
					s.erase({p[teleport[i][j]],teleport[i][j]})	;				
				
				}
				it=--s.end();
							    cout<<it->second<<" ";
			//	cout<<*(it--)<<" ";
				s.insert({p[i],i});
				for(int k=0;k<teleport[i].size();k++)
				{
					s.insert({p[teleport[i][k]],teleport[i][k]});
				}
				
	     	}
			 cout<<endl;
					
    }
		   
		 
	
	
	
	
	
	return 0;
	
}
