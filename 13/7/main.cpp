#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<char> cSet1; //��������1
	cSet1.insert('C');//�򼯺�1 ����Ԫ��
	cSet1.insert('D');
	cSet1.insert('A');
	cSet1.insert('F');
	cout << "set1:" << endl;
	set<char>::iterator it;
	for(it=cSet1.begin();it!=cSet1.end();it++)//��ʾ����1��Ԫ��
		cout << *it << endl;
	set<char> cSet2;//��������2
	cSet2.insert('B');//�򼯺�2 ����Ԫ��
	cSet2.insert('C');
	cSet2.insert('D');
	cSet2.insert('A');
	cSet2.insert('F');
	cout << "set2:" << endl;
	for(it=cSet2.begin();it!=cSet2.end();it++)//��ʾ����2��Ԫ��
		cout << *it << endl;
	if(cSet1==cSet2)
		cout << "set1= set2";
	else if(cSet1 < cSet2)
		cout << "set1< set2";
	else if(cSet1 > cSet2)
		cout << "set1> set2";
	cout << endl;
}
