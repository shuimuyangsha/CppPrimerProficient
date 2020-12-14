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
	vector<int> intVect;
	for(int i=0;i<5;i++)
		intVect.push_back(i);
	cout << "Vect";
	std::for_each(intVect.begin(),intVect.end(),Output);
	int result = accumulate(intVect.begin(),intVect.end(),5);
	cout << endl;
	cout << "Result :" << result << endl;
}
