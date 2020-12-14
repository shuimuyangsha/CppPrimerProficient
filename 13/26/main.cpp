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
	strVect1.push_back("Over");
	strVect1.push_back("Wednesday");
	strVect2.push_back("Monday");
	strVect2.push_back("Sunday");
	strVect2.push_back("Over");
	strVect2.push_back("Saturday");
	sort(strVect1.begin(),strVect1.end());
	sort(strVect2.begin(),strVect2.end());
	cout << "Vect1 :" << endl;
	for_each(strVect1.begin(),strVect1.end(),Output);
	cout << endl;
	cout << "Vect2 :" << endl;
	for_each(strVect2.begin(),strVect2.end(),Output);
	cout << endl;
	bool result=includes(strVect1.begin(),strVect1.end(),
		strVect2.begin()+1,strVect2.begin()+2);
	if(result)
		cout << "result : OK" << endl;
	else
		cout <<"result : ERROR"<<endl;
}
