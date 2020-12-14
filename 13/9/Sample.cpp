#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;
void main()
{
	multiset<int> imultiset;	//创建一个整型多重集合
	imultiset.insert(1);	//向集合中插入元素
	imultiset.insert(3);
	imultiset.insert(5);
	imultiset.insert(7);
	imultiset.insert(9);
	cout << "old multiset:" << endl;
	multiset<int>::iterator it;	//循环集合显示元素值
	for(it=imultiset.begin();it!=imultiset.end();it++)
		cout << *it << endl;
	it=imultiset.begin();
	imultiset.erase(++it);	//删除集合中的元素
	cout << "new multiset:" << endl;
	for(it=imultiset.begin();it!=imultiset.end();it++)	//循环集合，显示元素删除后的集合
		cout << *it << endl;
}
