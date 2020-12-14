#include <iostream >
#include <vector>
#include <algorithm>
using namespace std;
void main ()
{
	vector<int> intvect;
	vector<int>::iterator it;
	for(int i=0;i<=9;i+=2)
	{
		intvect.push_back(i);
	}
	cout << "Vect old:"<< endl;
	for(it=intvect.begin();it!=intvect.end();it++)
		cout << *it << " ";
	cout << endl;
	reverse(intvect.begin(),intvect.end());
	cout << "Vect new:"<< endl;
	for(it=intvect.begin();it!=intvect.end();it++)
		cout << *it << " ";
	cout << endl;
}


