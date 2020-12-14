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
	vector<char > charVect;
	charVect.push_back('M');
	charVect.push_back('R');
	charVect.push_back('K');
	charVect.push_back('J');
	charVect.push_back('H');
	charVect.push_back('I');
	cout << "Vect :";
	for_each(charVect.begin(),charVect.end(),Output);
	sort(charVect.begin(),charVect.end());
	cout << endl;
	cout << "Vect :";
	for_each(charVect.begin(),charVect.end(),Output);
	cout << endl;
}
