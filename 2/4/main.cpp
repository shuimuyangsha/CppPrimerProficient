#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
	double a=123.456789012345;
	cout << a << endl;  
	cout << setprecision(9) << a << endl;
	cout << setprecision(6);//恢复默认格式(精度为6)
	cout << setiosflags(ios::fixed); 
	cout << setiosflags(ios::fixed) << setprecision(8) << a << endl;
	cout << setiosflags(ios::scientific) << a << endl;
	cout << setiosflags(ios::scientific) << setprecision(4) << a << endl; 
}
