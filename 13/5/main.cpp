#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<int> iSet;	//����һ�����ͼ���
	iSet.insert(1);	//�򼯺��в���Ԫ��
	iSet.insert(3);
	iSet.insert(5);
	iSet.insert(7);
	iSet.insert(9);
	cout << "old set:" << endl;
	set<int>::iterator it;	//ѭ��������ʾԪ��ֵ
	for(it=iSet.begin();it!=iSet.end();it++)
		cout << *it << endl;
	it=iSet.begin();
	iSet.erase(++it);	//ɾ�������е�Ԫ��
	cout << "new set:" << endl;
	for(it=iSet.begin();it!=iSet.end();it++)	//ѭ�����ϣ���ʾԪ��ɾ����ļ���
		cout << *it << endl;
}
