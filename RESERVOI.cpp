#include <iostream>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n,m;
     cin>> n >> m;
     char a[n+2][m+2];
     for(int i=0;i<n+2;i++)
     {
         for(int j=0;j<m+2;j++)
         {
             a[i][j]='0';
         }
     }
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
         {
             cin>>a[i][j];
         }
     }
     int flag=0;
       
    /* for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
         {
             cout<<a[i][j];
         }
         cout<<endl;
     }  */
       
     for(int i=1;i<=n;i++)
     {
         for(int j=1;j<=m;j++)
         {
             if(a[i][j]=='W')
             {
                 if(a[i][j-1]=='0' || a[i][j-1]=='A' || a[i][j+1]=='0' || a[i][j+1]=='A'||a[i+1][j]=='A'|| a[i+1][j]=='0')
                 {
                     flag=1;
                     break;
                 }
             }     
                
			 if(a[i][j]=='A')
             {
                 if(a[i][j-1]=='W'||a[i][j+1]=='W'||a[i-1][j]=='B')
                 {
                 	
                 	  cout << a[i][j-1] << a[i][j+1] << a[i-1][j];
                      flag=2;
                      break;
                 }
             }
             if(a[i][j]=='B')
             {
                if(a[i+1][j]=='A')
                {
                      flag=3;
                      break;
                }
             }
                
          }
             if(flag>0)
                 break;
     }
         if(flag==1)
         cout<<"no1"<<endl;
         if(flag==2)
         cout<<"no2"<<endl;
         if(flag==3)
         cout<<"no3"<<endl;
         
         if(flag==0)
         cout<<"yes"<<endl;
         
       
   }
     
     
 
 return 0;
 
}


