#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
	cin>> t;
	while(t--)
	{  
	   string n;
	    cin >> n;
	   int c1=0,c0=0;
	    for(int i=0;i<n.size();i++)
	    {
	    	if(n[i]=='1')
	    	c1++;
	    	else
	    	c0++;
		}
		if(c1==1 || c0==1)
		{
			cout<< "Yes"<<endl;
			
		}
		else
		cout<<"No"<<endl;
		
	}
	return 0;
}
