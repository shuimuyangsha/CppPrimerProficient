#include <iostream>
using namespace std;
long Fac(int n)
{
	if(n==0)
		return 1;
	else
		return n*Fac(n-1);
}
void main()
{
	int n ;
	long f;
	cout << "please input a number" << endl;
	  cin >> n ;
	f=Fac(n);
	cout << "Result :" << f << endl;
}
