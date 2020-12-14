#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> intVect(5);
	vector<int>::iterator it=intVect.begin();
	*it++ = 1;
	*it++ = 3;
	*it++ = 5;
	*it++ = 7;
	*it=9;
	cout << "Vect Old:";
	for(it=intVect.begin();it!=intVect.end();it++)
		cout << *it << ' ';
	it= intVect.begin();
	*(it+2)=100;
	cout << endl;
	cout << "Vect :";
	for(it=intVect.begin();it!=intVect.end();it++)
		cout << *it << ' ';
	cout << endl;
}
