#include <iostream>
#include <list>
#include <algorithm>
#include <functional> 	//�ṩ�˰�װlambda�ĺ���ģ��
using namespace std;
int main()
{
	function<int(int)>hcf = [&](int x)->int {;return x*x*x;};
	int p = 5;
	int a = hcf(p);
		//hcf���������int(x){k2=123;return k1=x*x*x}����һ����ʱ�������ܷ���ĵ���main����
		//�ı�����������������£������Ա������ȫ�ֺ����ж��ɺܱ�����Ӧ�á�
		cout << "���p�����η�  " << a << endl;
	return 0;
}
