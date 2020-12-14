#include<iostream>
using namespace std;

int main()
{
	int buf[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
	int *p;
	p=buf[0];
	for(int i=0;i<sizeof(buf)/sizeof(int);i++,p++)
		cout << *p << endl;
	return 1;
}

