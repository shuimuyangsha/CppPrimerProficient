#include <iostream >
#include <string >
#include <vector>
#include <algorithm>
#include <functional>
#include <ostream>
#include <map>
using namespace std;

void main ()
{
	vector<int> intvect;
	vector<int>::iterator it1,it2,it3,
		itNew1,itNew2,itNew3;
	for(int i=0;i<=3;i++)
	
	{
		intvect.push_back(i);
		intvect.push_back(i);
	}
	cout << "Vect old2:"<< endl;
	for(it1=intvect.begin();it1!=intvect.end();it1++)
		cout << *it1 << " ";
	cout << endl;

	itNew1=unique(intvect.begin(),intvect.end());
	cout << "Vect new2" << endl;
	for(it1=intvect.begin();it1!=intvect.end();it1++)
		cout << *it1 << " ";
	cout << endl;


	itNew2=unique(intvect.begin(),itNew1);
	cout<< "adjacent" <<endl;
	for(it2=intvect.begin();it2!=itNew2;it2++)
		cout << *it2 << " ";
	cout << endl;
}


