#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void main()
{
	multiset<int ,less<int> > intSet;
	intSet.insert(7);
	intSet.insert(5);
	intSet.insert(1);
	intSet.insert(5);
	intSet.insert(7);
	cout << "Set:";
		multiset<int ,less<int> >::iterator it =intSet.begin();
	for(int i=0;i<intSet.size();++i)
		cout << *it++ << ' ';
	cout << endl;

	int cnt =count(intSet.begin(),intSet.end(),5);
	cout << "相同元素数量:" << cnt <<endl;
}
