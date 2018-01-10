#include <iostream>
using namespace std;
int main()
{
	int t;int n,fc=0,exc=0;double sum=0;
	double avg;
	cin>>t;
	while(t--)
	{
		avg=0;
		sum=0;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin >>a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			if(a[i]<=2)
			fc++;
			if(a[i]==5)
			exc++;
			sum+=a[i];
		}
		avg=sum/n;
		cout<<exc<<" me ex aaya"<<endl;
		cout<<fc<<" me fail hua"<<endl;
		cout<<avg<<" GPA hai"<<endl;
		if(avg>=4 && fc==0 && exc>=1)
		cout<< "Yes"<<endl;
		else
		cout<< "No"<<endl;
	}

return 0;
}
