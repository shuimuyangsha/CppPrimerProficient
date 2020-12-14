#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;
void main()
{
	multiset<int> imultiset;	//创建整型多重集合
	imultiset.insert(1);	//插入数据
	imultiset.insert(3);
	imultiset.insert(5);
	imultiset.insert(5);
	imultiset.insert(9);
	cout << "multiset:" << endl;
	multiset<int>::iterator it;	//循环并输出集合中的数据
	for(it=imultiset.begin();it!=imultiset.end();it++)
		cout << *it << endl;
}
