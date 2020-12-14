#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<char> cSet;	//利用set对象创建字符类型的集合
	cSet.insert('B');		//插入元素
	cSet.insert('C');
	cSet.insert('D');
	cSet.insert('A');
	cSet.insert('F');
	cout << "old set:" << endl;
	set<char>::iterator it;		//循环显示集合中的元素
	for(it=cSet.begin();it!=cSet.end();it++)
		cout << *it << endl;
	char cTmp;
	cTmp='D';
	it=cSet.find(cTmp);		//在集合中查找指定的元素
	cout << "start find:" << cTmp << endl;
	if(it==cSet.end())	//没找到元素
		cout << "not found" << endl;
	else		//找到元素
		cout << "found" << endl;
	cTmp='G';
	it=cSet.find(cTmp);		//查找指定的元素
	cout << "start find:" << cTmp << endl;
	if(it==cSet.end())	//没找到元素
		cout << "not found" << endl;
	else		//找到元素
		cout << "found"  << endl;
}
