#include <iostream>
using namespace std;
void main()
{
	struct PersonInfo
	{
		int index;
		char name[30];
		short age; 
	} pInfo;
	pInfo.index=0;
	strcpy(pInfo.name,"уехЩ");
	pInfo.age=20;
	cout << pInfo.index << endl;
	cout << pInfo.name << endl;
	cout << pInfo.age << endl;
}
