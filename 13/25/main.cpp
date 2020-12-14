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
	vector<string> strVect1;
	vector<string> strVect2;
	strVect1.push_back("Sunday");
	strVect1.push_back("Monday");
	strVect1.push_back("Tuesday");
	strVect1.push_back("Wednesday");
	strVect2.push_back("Thursday");
	strVect2.push_back("Friday");
	strVect2.push_back("Saturday");
	strVect2.push_back("Over");
	cout << "Vect1 :" << endl;
	for_each(strVect1.begin(),strVect1.end(),Output);
	cout << endl;
	cout << "Vect2 :" << endl;
	for_each(strVect2.begin(),strVect2.end(),Output);
	cout << endl;
	sort(strVect1.begin(),strVect1.end());
	sort(strVect2.begin(),strVect2.end());
	int size =strVect1.size()+strVect2.size();
	vector<string> strVect3(size);
	merge(strVect1.begin(),strVect1.end(),
		strVect2.begin(),strVect2.end(),
		strVect3.begin());
	cout << "Vect3 :" << endl;
	for_each(strVect3.begin(),strVect3.end(),Output);
}
