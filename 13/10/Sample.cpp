#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;
void main()
{
	multiset<char> cmultiset;	//利用multiset对象创建字符类型的集合
	cmultiset.insert('B');		//插入元素
	cmultiset.insert('C');
	cmultiset.insert('D');
	cmultiset.insert('A');
	cmultiset.insert('F');
	cout << "old multiset:" << endl;
	multiset<char>::iterator it;		//循环显示集合中的元素
	for(it=cmultiset.begin();it!=cmultiset.end();it++)
		cout << *it << endl;
	char cTmp;
	cTmp='D';
	it=cmultiset.find(cTmp);		//在集合中查找指定的元素
	cout << "start find:" << cTmp << endl;
	if(it==cmultiset.end())	//没找到元素
		cout << "not found" << endl;
	else		//找到元素
		cout << "found" << endl;
	cTmp='G';
	it=cmultiset.find(cTmp);		//查找指定的元素
	cout << "start find:" << cTmp << endl;
	if(it==cmultiset.end())	//没找到元素
		cout << "not found" << endl;
	else		//找到元素
		cout << "found"  << endl;
}
