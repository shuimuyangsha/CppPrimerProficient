#include <iostream>
using namespace std;
void main()
{
	int iYear;
	cout << "please input number" << endl;
	cin >> iYear;
	if(iYear%4==0 && iYear%100!=0 || iYear%400==0)
		cout << "It is a leap year" << endl;
	else
		cout << "It is not a leap year" << endl;
}

