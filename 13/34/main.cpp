#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> intVect(5);
	vector<int>::iterator it=intVect.begin();
	vector<int>::iterator saveIt=it;
	*it++ = 1;
	*it++ = 3;
	*it++ = 5;
	*it++ = 7;
	*it=9;
	cout << "Vect :";
	while(saveIt!=intVect.end())
		cout << *saveIt++ << ' ';
	cout << endl;
	do
	cout << *--saveIt << endl;
	while(saveIt != intVect.begin());
	cout << endl;
}
