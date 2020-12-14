#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout << "inPut a and b:" << endl;
	cin >> a >> b;
	cout << "a:" << a <<endl;
	cout << "b:" << b <<endl;
	
	if(a>b)
	{
		b=a-b;
		a=a-b;
		b=a+b;
	}
	cout << "a:" << a <<endl;
	cout << "b:" << b <<endl;
	return 0;
}
