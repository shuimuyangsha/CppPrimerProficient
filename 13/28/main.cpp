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
	vector<int> intVect2;

	for(int i=0;i<5;i++)
		intVect1.push_back(i);
	for(int j=2;j<8;j++)
		intVect2.push_back(j);
	cout << "Vect";
	cout << "Vect1 :";
	std::for_each(intVect1.begin(),intVect1.end(),Output);
	cout << endl;
	cout << "Vect2 :" << endl;
	std::for_each(intVect2.begin(),intVect2.end(),Output2);
	cout << endl;
	int result = inner_product(intVect1.begin(),intVect1.end(),
		intVect1.begin(),0);
	cout << endl;
	cout << "Result :" << result << endl;
}
