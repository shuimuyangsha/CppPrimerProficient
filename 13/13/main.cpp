#include <iostream>
#include <map>
using namespace std;
void main()
{
	map<int,char> cMap;	//����mapӳ�����
	cMap[1]='B';	//������Ԫ��
	cMap[2]='C';
	cMap[3]='D';
	cMap[4]='G';
	cMap[5]='F';
	cout << "map" << endl;
	map<int ,char>::iterator it;	//ѭ��ӳ������е�Ԫ�أ�����ʾֵ
	for(it=cMap.begin();it!=cMap.end();it++)
	{
		cout << (*it).first << "->";
		cout << (*it).second << endl;
	}
}
