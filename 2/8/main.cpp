#include <iostream>
using namespace std;
void main()
{
	float x=20,y=-400.00;
	cout << x <<' '<< y << endl;
	cout.setf(ios::showpoint);//ǿ����ʾС�������Ч0
	cout << x <<' '<< y << endl;
	cout.unsetf(ios::showpoint);
	cout.setf(ios::scientific);//���ð���ѧ��ʾ�����
	cout << x <<' '<< y << endl;
	cout.setf(ios::fixed);//���ð������ʾ�����
	cout << x <<' '<< y << endl;
}
