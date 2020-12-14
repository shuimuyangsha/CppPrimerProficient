#include <iostream>
using namespace std;
void main()
{
	int *p1,*p2;
	int	*p;  //¡Ÿ ±÷∏’Î
	int a,b;
	cout << "input a: " << endl;
	cin >> a;
	cout << "input b: " << endl;
	cin >> b;
	p1=&a;p2=&b;
	if(a<b)
	{
		p=p1;
		p1=p2;
		p2=p;
	}
	cout << "a=" << a;
	cout << " ";
	cout << "b=" << b;
	cout << endl;
	cout << "max=" << *p1 << ",min=" << *p2 <<endl;
}
