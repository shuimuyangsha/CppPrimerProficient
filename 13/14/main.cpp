#include <iostream>
#include <map>
using namespace std;
void main()
{
	multimap<int ,char> cMap;//创建multimap映射对象
	cMap.insert(map<int,char>::value_type(1,'B'));//插入新元素
	cMap.insert(map<int,char>::value_type(2,'C'));
	cMap.insert(map<int,char>::value_type(4,'C'));
	cMap.insert(map<int,char>::value_type(5,'G'));
	cMap.insert(map<int,char>::value_type(3,'F'));
	cout << "multimap" << endl;
	multimap <int ,char>::iterator it;//循环multimap映射并显示元素值
	for(it=cMap.begin();it!=cMap.end();it++)
	{
		cout << (*it).first << "->";
		cout << (*it).second << endl;
	}
}
