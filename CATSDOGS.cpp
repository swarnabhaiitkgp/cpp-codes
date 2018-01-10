#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{   int flag=0;
		int c,d,l;
		cin >> c >> d >> l;
		for(int i=0;i<=c;i++)
		{    
		      		
			   if(((c-i)*4+4*d)==l)
			   {
			   	flag=1;
			   	break;
			   }
			   if(((c-i)*4+4*d)<l) 
			   break;
	     	
	    }
	    if (flag==1)
	    cout<< "yes"<<endl;
	    else
	    cout<< "no"<<endl;
	    
	}
	return 0;
}
