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
	cout << "Vect :" << endl;;
	for_each(strVect.begin(),strVect.end(),Output);
	cout << endl;
	nth_element(strVect.begin(),strVect.begin()+5,strVect.end());
	cout << "Vect :" << endl;
	for_each(strVect.begin(),strVect.end(),Output);
}
