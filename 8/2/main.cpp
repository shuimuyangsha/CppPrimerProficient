#include <iostream>
using namespace std;
void main()
{
	struct PERSONINFO
	{
		int index;
		char name[30];
		short age; 
	}*pPersonInfo, pInfo={0,"уехЩ",20};
	pPersonInfo=&pInfo;
	cout << pPersonInfo->index << endl;
	cout << pPersonInfo->name << endl;
	cout << pPersonInfo->age << endl;
}
