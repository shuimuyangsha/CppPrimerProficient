#include <iostream>
using namespace std;
void main()
{
	int a;
	int & ref_a =a;
	a=100;
	cout << "a= "<< a <<endl;
	cout << "ref_a="<< ref_a << endl;
	a=2;
	cout << "a= "<< a <<endl;
	cout << "ref_a="<< ref_a << endl;
	int b=20;
	ref_a=b;
	cout << "a= "<< a <<endl;
	cout << "ref_a="<< ref_a << endl;
	ref_a--;
	cout << "a= "<< a <<endl;
	cout << "ref_a="<< ref_a << endl;
}
