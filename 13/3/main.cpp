#include <iostream>
#include <list>
using namespace std;
int main()
{
	char cTemp;
	list<char> charlist;
	for(int i=0;i<5;i+=3)
	{
		cTemp='a'+i;
		charlist.push_front(cTemp);
	}
	cout << "list old:" <<endl;
	list<char>::iterator it;
	for(it=charlist.begin();it!=charlist.end();it++)
	{
		cout << *it << endl;
	}
	list<char>::iterator itstart=charlist.begin();
	charlist.insert(++itstart,2,'A');
	cout << "list old" << endl;
	for(it=charlist.begin();it!=charlist.end();it++)
	{
		cout << *it << endl;
	}
	return 0;
}
