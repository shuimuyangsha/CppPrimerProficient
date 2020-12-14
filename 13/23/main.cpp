#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void Output(const string& val)
{
	cout << val << endl;
}
void main()
{
	vector<string> strVect;
	strVect.push_back("Sunday");
	strVect.push_back("Monday");
	strVect.push_back("Tuesday");
	strVect.push_back("Wednesday");
	strVect.push_back("Thursday");
	strVect.push_back("Friday");
	strVect.push_back("Saturday");
	cout << "Vect :";
	for_each(strVect.begin(),strVect.end(),Output);
	partial_sort(strVect.begin(),strVect.begin()+3,strVect.end());
	cout << endl;
	cout << "Vect :";
	for_each(strVect.begin(),strVect.end(),Output);
}
