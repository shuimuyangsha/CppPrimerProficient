#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;
void main()
{
	multiset<int> imultiset;	//����һ�����Ͷ��ؼ���
	imultiset.insert(1);	//�򼯺��в���Ԫ��
	imultiset.insert(3);
	imultiset.insert(5);
	imultiset.insert(7);
	imultiset.insert(9);
	cout << "old multiset:" << endl;
	multiset<int>::iterator it;	//ѭ��������ʾԪ��ֵ
	for(it=imultiset.begin();it!=imultiset.end();it++)
		cout << *it << endl;
	it=imultiset.begin();
	imultiset.erase(++it);	//ɾ�������е�Ԫ��
	cout << "new multiset:" << endl;
	for(it=imultiset.begin();it!=imultiset.end();it++)	//ѭ�����ϣ���ʾԪ��ɾ����ļ���
		cout << *it << endl;
}
