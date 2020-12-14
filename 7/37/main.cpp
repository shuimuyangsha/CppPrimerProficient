#include<iostream>
using namespace std;
void main(int argc,char *argv[])
{
	cout << "the list of parameter:" << endl;
	while(argc>1)
	{
		++argv;
		cout << *argv << endl;
		--argc;
	}
}
