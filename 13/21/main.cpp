//rotate
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
	charVect.push_back('B');
	charVect.push_back('A');
	charVect.push_back(' ');
	charVect.push_back('M');
	charVect.push_back('R');
	charVect.push_back(' ');
	charVect.push_back('K');
	
	cout << "Vect :";
	for_each(charVect.begin(),charVect.end(),Output);
	rotate(charVect.begin(),charVect.begin()+6,charVect.end());
	cout << endl;
	cout << "Vect :";
	for_each(charVect.begin(),charVect.end(),Output);
	cout << endl;
}
