#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		
		int n;
		cin >> n;
		long long int a[n][n];
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cin >> a[i][j];
			}
		}
		for(int i=n-1;i>=0;i--)
		{
			/*for(int j=n-1;j>=0;j--)
			{*/
		sort(a[i],a[i]+n)	;
			//}
		}
		long long int ans=a[n-1][n-1];
		long long int prev=ans;int flag=0;
		for(int i=n-2;i>=0;i--)
		{
			for(int j=n-1;j>=0;j--)
			{
				if(a[i][j]<prev)
				{
					flag++;
					ans=ans+a[i][j];
					prev=a[i][j];
					break;
				}
				
			}
		}
		if (flag==n-1)
			cout << ans << endl;
		else 
		    cout << "-1" << endl; 	
		
		
	}
}
