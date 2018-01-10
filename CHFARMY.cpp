#include <iostream>
#include <cmath>
using namespace std;
int main()
{ int t;
	cin >> t;
	while(t--)
	{
	
	long long k;long long d;
	cin >> k;
	if(log(k)/log(5)==(long long)(log(k)/log(5)))
	d=(log(k)/log(5));
	else
	d=(long long)(log(k)/log(5))+1;
	long long num=0,n,digit;
	//cout<<d<<endl;
int flag=0;
	
	while(d>0)
	{
	        d--;
	        if(d==0)
	        n=k-1;
	        else{
			
			n=(k)/(long long)(pow(5,d));
           	k=k%(long long)(pow(5,d));
    }
          if(k==0 )
	       {
	       	n=n-1;
	       	flag=1;
	       	}
	       	
	  switch(n)
	  {
		case 0:digit=0;break;
		case 1:digit=2;break;
		case 2:digit=4;break;
		case 3:digit=6;break;
		case 4:digit=8;break;
		case 5:digit=8;
	  }
	//  cout << digit<<endl;
	  
	num=num*10+digit;
	if(flag==1)
	break;
   }
    
  while(d>0)
   {
   	num=num*10+8;
	   d--;   	
   }
	
    
	cout<< num<< endl;
}
	return 0;
	
}
