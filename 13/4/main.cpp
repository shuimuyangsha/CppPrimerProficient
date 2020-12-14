#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<int> iSet;	//创建整型集合
	iSet.insert(1);	//插入数据
	iSet.insert(3);
	iSet.insert(5);
	iSet.insert(7);
	iSet.insert(9);
	cout << "set:" << endl;
	set<int>::iterator it;	//循环并输出集合中的数据
	for(it=iSet.begin();it!=iSet.end();it++)
		cout << *it << endl;
}
