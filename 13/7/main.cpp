#include <iostream>
#include <set>
using namespace std;
void main()
{
	set<char> cSet1; //建立集合1
	cSet1.insert('C');//向集合1 插入元素
	cSet1.insert('D');
	cSet1.insert('A');
	cSet1.insert('F');
	cout << "set1:" << endl;
	set<char>::iterator it;
	for(it=cSet1.begin();it!=cSet1.end();it++)//显示集合1中元素
		cout << *it << endl;
	set<char> cSet2;//建立集合2
	cSet2.insert('B');//向集合2 插入元素
	cSet2.insert('C');
	cSet2.insert('D');
	cSet2.insert('A');
	cSet2.insert('F');
	cout << "set2:" << endl;
	for(it=cSet2.begin();it!=cSet2.end();it++)//显示集合2中元素
		cout << *it << endl;
	if(cSet1==cSet2)
		cout << "set1= set2";
	else if(cSet1 < cSet2)
		cout << "set1< set2";
	else if(cSet1 > cSet2)
		cout << "set1> set2";
	cout << endl;
}
