#include <iostream>
 using namespace std;
 int main()
 {
 	int t;
 	cin>>t;
 	while(t--)
 	{
 		int a[4];
 		for(int i=0;i<=3;i++)
 		{
 			cin >> a[i] ;
 		}
 		int flag=0;
 		for(int i=0;i<4;i++)
 		{   
 		    if(a[i]==-1)
 		    continue;
 			for(int j=i+1;j<=4;j++)
 			{
 				if(a[i]==a[j])
 				{flag++;a[j]=-1;break;}
			 }
		 }
		 if(flag==2 || flag==3)
		 cout<<"YES"<<endl;
		 else
		 cout << "NO" << endl ;
 		
	}
 	return 0;
 }
