#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;
void main()
{
	multiset<char> cmultiset;	//����multiset���󴴽��ַ����͵ļ���
	cmultiset.insert('B');		//����Ԫ��
	cmultiset.insert('C');
	cmultiset.insert('D');
	cmultiset.insert('A');
	cmultiset.insert('F');
	cout << "old multiset:" << endl;
	multiset<char>::iterator it;		//ѭ����ʾ�����е�Ԫ��
	for(it=cmultiset.begin();it!=cmultiset.end();it++)
		cout << *it << endl;
	char cTmp;
	cTmp='D';
	it=cmultiset.find(cTmp);		//�ڼ����в���ָ����Ԫ��
	cout << "start find:" << cTmp << endl;
	if(it==cmultiset.end())	//û�ҵ�Ԫ��
		cout << "not found" << endl;
	else		//�ҵ�Ԫ��
		cout << "found" << endl;
	cTmp='G';
	it=cmultiset.find(cTmp);		//����ָ����Ԫ��
	cout << "start find:" << cTmp << endl;
	if(it==cmultiset.end())	//û�ҵ�Ԫ��
		cout << "not found" << endl;
	else		//�ҵ�Ԫ��
		cout << "found"  << endl;
}
