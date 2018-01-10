#include <iostream>
using namespace std;


	void Intersection(int arr1[],int arr2[], int m, int n)
	
	{
		int i=0, j=0;
		while(i<m && j<n)
		{
			if(arr1[i] < arr2[j])
		    	i++;
			else if(arr2[j]<arr1[i])
		    	j++;
		    else
			{
				cout<< (arr2[i+j])<< " ";
				i++;
			}   	
			
		}
		
	}
	
	
	int main()
	{
		int arr1[]={1, 4, 7, 9, 11};
		int arr2[]={3 ,4 ,7 ,8 ,11};
		int m=5;
		int n=5;
		Intersection(arr1,arr2,m,n);
		return 0;
	}
	

