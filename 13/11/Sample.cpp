#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;
void main()
{
	multiset<char> cmultiset1; //��������1
	cmultiset1.insert('C');//�򼯺�1 ����Ԫ��
	cmultiset1.insert('D');
	cmultiset1.insert('A');
	cmultiset1.insert('F');
	cout << "multiset1:" << endl;
	multiset<char>::iterator it;
	for(it=cmultiset1.begin();it!=cmultiset1.end();it++)//��ʾ����1��Ԫ��
		cout << *it << endl;
	multiset<char> cmultiset2;//��������2
	cmultiset2.insert('B');//�򼯺�2 ����Ԫ��
	cmultiset2.insert('C');
	cmultiset2.insert('D');
	cmultiset2.insert('A');
	cmultiset2.insert('F');
	cout << "multiset2:" << endl;
	for(it=cmultiset2.begin();it!=cmultiset2.end();it++)//��ʾ����2��Ԫ��
		cout << *it << endl;
	if(cmultiset1==cmultiset2)
		cout << "multiset1= multiset2";
	else if(cmultiset1 < cmultiset2)
		cout << "multiset1< multiset2";
	else if(cmultiset1 > cmultiset2)
		cout << "multiset1> multiset2";
	cout << endl;
}
