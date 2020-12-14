#include <iostream>
#include <map>
using namespace std;
void main()
{
	map<int ,char> cMap;	//创建map映射对象
	cMap.insert(map<int,char>::value_type(1,'B'));		//插入新元素
	cMap.insert(map<int,char>::value_type(2,'C'));
	cMap.insert(map<int,char>::value_type(4,'D'));
	cMap.insert(map<int,char>::value_type(5,'G'));
	cMap.insert(map<int,char>::value_type(3,'F'));
	cout << "map" << endl;
	map<int ,char>::iterator it;		//循环map映射显示元素值
	for(it=cMap.begin();it!=cMap.end();it++)
	{
		cout << (*it).first << "->";
		cout << (*it).second << endl;
	}
}
