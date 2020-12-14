#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	cout << "检查小于60的数，记录下它们的值，之后将它们替换成60" << endl;
	int array[10] = { 70,89,77,30,61,47,55,21,67,31 };
	map<int, int> record1;
	map<int, int> record2;
	vector<int> vInt1(array, array + 10);
	vector<int> vInt2(array, array + 10);
	int index1 = 0;
	int index2 = 0;
	transform(vInt1.begin(), vInt1.end(), vInt1.begin(),
		[&](int x)->int {
		if (x<60)
		{
			pair<int, int>temp(index1, x);
			record1.insert(temp);
			x = 60;
			index1++;
		}
		return x;});
	transform(vInt2.begin(), vInt2.end(), vInt2.begin(),
		[&, record2](int x)mutable->int {
		if (x<60)
		{
			pair<int, int> temp(index2, x);
			record2.insert(temp);
			index2++;
			x = 60;
		}
		return x;});
	if (record1.empty())
	{
		cout << "record1是空的" << endl;
	}
	else
	{
		cout << "record1不是空的,它的各项值:" << endl;													for_each(record1.begin(), record1.end(), [](pair<int, int>p)
		{cout << p.second << " ";});
	}
	cout << endl;
	if (record2.empty())
	{
		cout << "record2是空的" << endl;
	}
	cout << "输出vInt1中的值" << endl;
	for_each(vInt1.begin(), vInt1.end(), [](int x) {cout << x << " ";});
	cout << endl;
	cout << "输出vInt2中的值" << endl;
	for_each(vInt2.begin(), vInt2.end(), [](int x) {cout << x << " ";});
	cout << endl;
	return 0;
}
