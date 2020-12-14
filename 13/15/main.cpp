#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void main()
{
	multiset<int , less<int> > intSet;
	intSet.insert(7);
	intSet.insert(5);
	intSet.insert(1);
	intSet.insert(5);
	intSet.insert(7);
	cout << "Set:" << " ";
		multiset<int , less<int> >::iterator it =intSet.begin();
	for(int i=0;i<intSet.size();++i)
		cout << *it++ << ' ';
	cout << endl;
	cout << "第一次匹配：";
		it=adjacent_find(intSet.begin(),intSet.end());
	cout << *it++ << ' ';
	cout<< *it << endl;
	cout << "第二次匹配：";
		it=adjacent_find(it,intSet.end());
	cout << *it++ << ' ';
	cout << *it << endl;
}
