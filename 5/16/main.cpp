#include<iostream>
using namespace std;
/*
       *
      ***
     *****
	*******
     *****
      ***
       *

*/

int main()
{
	
	for(int i=1;i<=4;i++)
	{
		for(int m=0;m<4-i;m++)
		{
			cout << " " ;	
		}
		for(int n=0;n<(2*i-1);n++)
		{
				cout << "*" ;
		}
			cout << endl;
	}
	
	for(int j=3;j>=1;j--)
	{
		for(int m=0;m<4-j;m++)
		{
			cout << " " ;	
		}
		for(int n=0;n<(2*j-1);n++)
		{
				cout << "*" ;
		}
			cout << endl;
	}
	return 1;
}
