#include <iostream>
 using namespace std;
 
 int main()
 {
 	int t;
 	cin >> t;
 	while(t--)
 	{
 	int n,k;
 	cin>> n >> k;
 	int A[n+1]={0};
 	int B[n+1]={0};
 	int disq=0;
 	for(int i=1;i<=n;i++)
 	{
 		cin >> A[i];
 		if(A[i]==i)
 		{
 		disq++;
		 }
		 
 		B[A[i]]++;
	 }
	 int qua=0;
	 
	 for(int j=1;j<=n;j++)
	 {
	    if(B[j]>=k)
		qua++;	
	 }
	
	if((qua-disq)<0)
	cout << 0 << endl;
	else
	cout << qua-disq << endl;	
	}
	 return 0;
 }
