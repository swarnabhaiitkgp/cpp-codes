#include <iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,result;
		cin>> n>>m;
		result=(n-1)*(m-1)*2 + (n-1)+ (m-1);
		cout<< result<< endl;
	}
	return 0;
	
}
