#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> intVect(5);
	vector<int>::iterator it=intVect.begin();
	vector<int>::iterator saveIt=it;
	*it++ = 12;
	*it++ = 21;
	*it++ = 31;
	*it++ =41;
	*it=9;
	cout << "Vect :";
	while(saveIt!=intVect.end())
		cout << *saveIt++ << ' ';
	cout << endl;
}
