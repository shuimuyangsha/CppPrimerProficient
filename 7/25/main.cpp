#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int plus(int b)
{
	return b+1;
}
int main()
{
	void* pV = NULL;					//����һ��������ָ��
	int result = 0;
	pV = plus;							//��ָ��ָ����plus
	cout<<"ִ��pVָ��ĺ���:"<<endl;
  	result=((int(*)(int))pV)(10);	//��������ָ��pVǿ��ת������ֵ���͡��������͵ĺ���ָ��
	cout<<"result:"<<result<<endl;
	return 0;
}
