#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	stringstream ss;
	for(int i=65;i<=71;i++)
	{   
		for(int j=1;j<=11;j++)
        {
           ss << j;
           cout<< char(i)+ss.str()+" ";
            ss.str("")	;
		}   
			cout<< "\n";
	}
}
