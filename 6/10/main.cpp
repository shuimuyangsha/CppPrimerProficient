#include<iostream>
using namespace std;
int add(int x)
{
	static int n=0;
	n=n+x;
	return n;
}
void main()
{
	int i,j,sum;
	cout << " input the number:" << endl;
	cin >> i;
	cout << "the result is:" << endl;
	for(j=1;j<=i;j++)
	{
		sum=add(j);
		cout << j << ":" <<sum << endl;
	}
}
