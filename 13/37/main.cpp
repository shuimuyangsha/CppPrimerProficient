#include <vector>
#include <map>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	cout << "���С��60��������¼�����ǵ�ֵ��֮�������滻��60" << endl;
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
		cout << "record1�ǿյ�" << endl;
	}
	else
	{
		cout << "record1���ǿյ�,���ĸ���ֵ:" << endl;													for_each(record1.begin(), record1.end(), [](pair<int, int>p)
		{cout << p.second << " ";});
	}
	cout << endl;
	if (record2.empty())
	{
		cout << "record2�ǿյ�" << endl;
	}
	cout << "���vInt1�е�ֵ" << endl;
	for_each(vInt1.begin(), vInt1.end(), [](int x) {cout << x << " ";});
	cout << endl;
	cout << "���vInt2�е�ֵ" << endl;
	for_each(vInt2.begin(), vInt2.end(), [](int x) {cout << x << " ";});
	cout << endl;
	return 0;
}
