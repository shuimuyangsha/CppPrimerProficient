#include<iostream>
using namespace std;
int mul(int x)
{
	static int n=1;
	n=n*x;
	return n;
}
void main()
{
	int i=3;
	int	j=0;
	int iResult;
	for(j=0;j<3;j++)
	{
		iResult=mul(i);
	}
	cout << "Result :" << iResult << endl;
}
