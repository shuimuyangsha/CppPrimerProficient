//partial_sum
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
void Output(int val)
{
	cout << val << ' ';
}
void Output2(int val)
{
	cout << val << endl;
}
void main()
{
	vector<int> intVect1;
	vector<int> intVect2(5);
	for(int i=3;i<13;i+=2)
		intVect1.push_back(i);
	cout << "Vect1 :";
	std::for_each(intVect1.begin(),intVect1.end(),Output);
	cout << endl;
	partial_sum(intVect1.begin(),intVect1.end(),intVect2.begin());
	cout << "Vect2 :" << endl;
	std::for_each(intVect2.begin(),intVect2.end(),Output2);
	cout << endl;
}
