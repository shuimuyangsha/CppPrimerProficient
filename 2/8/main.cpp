#include <iostream>
using namespace std;
void main()
{
	float x=20,y=-400.00;
	cout << x <<' '<< y << endl;
	cout.setf(ios::showpoint);//强制显示小数点和无效0
	cout << x <<' '<< y << endl;
	cout.unsetf(ios::showpoint);
	cout.setf(ios::scientific);//设置按科学表示法输出
	cout << x <<' '<< y << endl;
	cout.setf(ios::fixed);//设置按定点表示法输出
	cout << x <<' '<< y << endl;
}
