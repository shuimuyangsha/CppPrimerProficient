#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Output(int val)
{
	cout << val << ' ';
}
bool equals5(int val)
{
	return val==5;
}
void main()
{
	vector<int > intVect;
	intVect.push_back(7);
	intVect.push_back(3);
	intVect.push_back(5);
	cout << "Vect :";
	for_each(intVect.begin(),intVect.end(),Output);
	partition(intVect.begin(),intVect.end(),equals5);
	cout << endl;
	cout << "Vect :";
	for_each(intVect.begin(),intVect.end(),Output);
	cout << endl;
}
