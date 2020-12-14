#include<iostream>
using namespace std;
int main()
{
	int a=8;
	a+=a*=a/=a-6;
	cout << "Result :" << a << endl;
	return 1;
}
