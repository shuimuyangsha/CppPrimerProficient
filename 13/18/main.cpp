#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Output(int val)
{
	cout << val << ' ';
}
void main()
{
	vector<int > intVect;
	for(int i=0;i<10;++i)
		intVect.push_back(i);
	cout << "Vect :";
	for_each(intVect.begin(),intVect.end(),Output);
	fill(intVect.begin(),intVect.begin()+5,0);
	cout << endl;
	cout << "Vect :";
	for_each(intVect.begin(),intVect.end(),Output);
	cout << endl;
}
