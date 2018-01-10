#include <iostream>
#include <string>
using namespace std;
int main()
{
	int t;
    cin >> t;	
    while(t--)
    {
    	string s;
    	cin>> s;
    	int flag=0;
    	for(int i=0;i<(s.size()+1)/2;i++)
    	{
    		if(s[i]!='.')
    		{   if(s[s.size()-(i+1)]=='.')
    		     s[s.size()-(i+1)]=s[i];
    			if(s[i]!=s[s.size()-(i+1)])
				flag=1;
    			
			}
			if(flag==1)
			break;
			if(s[i]=='.')
			{
				if(s[s.size()-(i+1)]=='.')
				{
					s[i]='a';
					s[s.size()-(i+1)]='a';
				}
				if(s[s.size()-(i+1)]!='.')
				s[i]=s[s.size()-(i+1)];
			}
		}
			if(flag==1)
			cout << "-1"<<endl;
			else
			cout << s << endl;
		
		
	}
}

