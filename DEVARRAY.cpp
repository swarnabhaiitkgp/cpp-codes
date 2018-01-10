#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n,q;
   	cin >> n >> q;
   	long a[n];
   	long Q[q];
 	for(int i=0;i<n;i++)
 	{
 	  cin >> a[i];
 	  	  
 	}
 	long *max=max_element(a,a+n);
 	long *min=min_element(a,a+n);
 	for(int i=0;i<q;i++)
 	{
 		cin >> Q[i];
 		if(Q[i]>=*min && Q[i]<=*max)
 		cout<< "YES" <<endl;
 		else
 		cout<< "NO" <<endl;
 		
	}
	
	
}
