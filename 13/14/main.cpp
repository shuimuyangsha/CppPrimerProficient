#include <iostream>
#include <map>
using namespace std;
void main()
{
	multimap<int ,char> cMap;//����multimapӳ�����
	cMap.insert(map<int,char>::value_type(1,'B'));//������Ԫ��
	cMap.insert(map<int,char>::value_type(2,'C'));
	cMap.insert(map<int,char>::value_type(4,'C'));
	cMap.insert(map<int,char>::value_type(5,'G'));
	cMap.insert(map<int,char>::value_type(3,'F'));
	cout << "multimap" << endl;
	multimap <int ,char>::iterator it;//ѭ��multimapӳ�䲢��ʾԪ��ֵ
	for(it=cMap.begin();it!=cMap.end();it++)
	{
		cout << (*it).first << "->";
		cout << (*it).second << endl;
	}
}
