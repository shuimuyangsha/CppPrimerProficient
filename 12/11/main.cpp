#include <iostream >
#include <string >
using namespace std;
template<class Type>
Type add(Type a,Type b)//���庯��ģ��
{
	return a+b;
}

char * add(char * a,char * b)// ���غ���ģ��
{
	strcat(a,b); 
	return a;
}

void main ()
{
	/*Type �������͡�����*/
	//int a=0,b=0;
	//cout << "Input a and b";
	//cin >>a >>b;
	//cout << "��Ϊ��" << add(a,b) << endl;
	
	//float a=0.0,b=0.0;
	//cout << "Input a and b";
	//cin >>a >>b;
	//cout << "��Ϊ��" << add(a,b) << endl;
	/*�����Ժ���Խ����ַ������*/
	char a[128];
	char b[128];
	cout << "Input a and b" << endl;
	cin >>a >>b;
	cout << "��Ϊ��" << add(a,b) << endl;
}


