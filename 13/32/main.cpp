#include <iostream>
#include <vector>
using namespace std;
void main()
{
	vector<int> intVect(5);
	vector<int>::iterator out=intVect.begin();
	*out++ = 1;
	*out++ = 3;
	*out++ = 5;
	*out++ = 7;
	*out=9;
	cout << "Vect :";
	vector<int>::iterator it =intVect.begin();
	while(it!=intVect.end())
		cout << *it++ << ' ';
	cout << endl;
}
