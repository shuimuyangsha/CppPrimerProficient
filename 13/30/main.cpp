
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;
void Output(int val)
{
	cout << val << ' ';
}
void main()
{
	vector<int> intVect1;


	intVect1.push_back(7);
	intVect1.push_back(3);
	intVect1.push_back(5);
	cout << "Vect1 :";
	std::for_each(intVect1.begin(),intVect1.end(),Output);
	cout << endl;
	vector<int> intVect2(intVect1.size());
	adjacent_difference(intVect1.begin(),intVect1.end(),intVect2.begin());
	partial_sum(intVect1.begin(),intVect1.end(),intVect2.begin());
	cout << "Vect2 :";
	std::for_each(intVect2.begin(),intVect2.end(),Output);
	cout << endl;
}
