#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<int> iSet;	//创建一个整型集合
	iSet.insert(1);	//向集合中插入元素
	iSet.insert(3);
	iSet.insert(5);
	iSet.insert(7);
	iSet.insert(9);
	cout << "old set:" << endl;
	set<int>::iterator it;	//循环集合显示元素值
	for(it=iSet.begin();it!=iSet.end();it++)
		cout << *it << endl;
	it=iSet.begin();
	iSet.erase(++it);	//删除集合中的元素
	cout << "new set:" << endl;
	for(it=iSet.begin();it!=iSet.end();it++)	//循环集合，显示元素删除后的集合
		cout << *it << endl;
}
