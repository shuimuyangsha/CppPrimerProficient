#include <iostream>
#include <map>
using namespace std;
void main()
{
	map<int ,char> cMap;	//����mapӳ�����
	cMap.insert(map<int,char>::value_type(1,'B'));		//������Ԫ��
	cMap.insert(map<int,char>::value_type(2,'C'));
	cMap.insert(map<int,char>::value_type(4,'D'));
	cMap.insert(map<int,char>::value_type(5,'G'));
	cMap.insert(map<int,char>::value_type(3,'F'));
	cout << "map" << endl;
	map<int ,char>::iterator it;		//ѭ��mapӳ����ʾԪ��ֵ
	for(it=cMap.begin();it!=cMap.end();it++)
	{
		cout << (*it).first << "->";
		cout << (*it).second << endl;
	}
}
