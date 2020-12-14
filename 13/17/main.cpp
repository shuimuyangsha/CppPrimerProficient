#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
void Output(int val)
{
	cout << val << ' ';
}
void main()
{
	multiset<int ,less<int> > intSet;
	intSet.insert(7);
	intSet.insert(5);
	intSet.insert(3);
	cout << "Set:";
		for_each(intSet.begin(),intSet.end(),Output);
		cout << endl;
}
