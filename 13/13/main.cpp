#include <iostream>
#include <map>
using namespace std;
void main()
{
	map<int,char> cMap;	//创建map映射对象
	cMap[1]='B';	//插入新元素
	cMap[2]='C';
	cMap[3]='D';
	cMap[4]='G';
	cMap[5]='F';
	cout << "map" << endl;
	map<int ,char>::iterator it;	//循环映射对象中的元素，并显示值
	for(it=cMap.begin();it!=cMap.end();it++)
	{
		cout << (*it).first << "->";
		cout << (*it).second << endl;
	}
}
