#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;
void main()
{
	multiset<int> imultiset;	//�������Ͷ��ؼ���
	imultiset.insert(1);	//��������
	imultiset.insert(3);
	imultiset.insert(5);
	imultiset.insert(5);
	imultiset.insert(9);
	cout << "multiset:" << endl;
	multiset<int>::iterator it;	//ѭ������������е�����
	for(it=imultiset.begin();it!=imultiset.end();it++)
		cout << *it << endl;
}
