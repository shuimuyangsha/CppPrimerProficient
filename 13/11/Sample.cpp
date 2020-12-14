#include "stdafx.h"
#include <iostream>
#include <set>
using namespace std;
void main()
{
	multiset<char> cmultiset1; //建立集合1
	cmultiset1.insert('C');//向集合1 插入元素
	cmultiset1.insert('D');
	cmultiset1.insert('A');
	cmultiset1.insert('F');
	cout << "multiset1:" << endl;
	multiset<char>::iterator it;
	for(it=cmultiset1.begin();it!=cmultiset1.end();it++)//显示集合1中元素
		cout << *it << endl;
	multiset<char> cmultiset2;//建立集合2
	cmultiset2.insert('B');//向集合2 插入元素
	cmultiset2.insert('C');
	cmultiset2.insert('D');
	cmultiset2.insert('A');
	cmultiset2.insert('F');
	cout << "multiset2:" << endl;
	for(it=cmultiset2.begin();it!=cmultiset2.end();it++)//显示集合2中元素
		cout << *it << endl;
	if(cmultiset1==cmultiset2)
		cout << "multiset1= multiset2";
	else if(cmultiset1 < cmultiset2)
		cout << "multiset1< multiset2";
	else if(cmultiset1 > cmultiset2)
		cout << "multiset1> multiset2";
	cout << endl;
}
