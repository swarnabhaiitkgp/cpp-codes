#include<iostream>
using namespace std;
int main()
{
  int t;	
  cin>>t;
  while(t--)
  {
  	int m=0;int n=0;
  	cin>>n>>m;
  	if((m+n)%2==1)
  	cout<< "Yes";
  	else
  	cout<< "No";
  }
  return 0;
  }
