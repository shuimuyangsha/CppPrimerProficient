#include <iostream>
using namespace std;
static float  global = 1.111f;		//��̬ȫ�ֱ���
void offset(float && f)			//��ֵ����
{
	global += f;
}
float getFloat()
{
	float f = 4.444f;
	return f;
}
void offset(float& f)  			//������offset����(��ֵ����)
{
	global -= f;
}
int main()
{
	float u = 10.000f;
	cout << "global:" << global << endl;
	offset(3.333f);   			//������ֵ���ú���
	cout << "global:" << global << endl;
	offset(getFloat() + 2.222);
	cout << "global:" << global << endl;
	offset(u);   				//��ֵ����
	cout << "global:" << global << endl;
	return 0;
}
