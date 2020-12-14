#include <iostream>
using namespace std;
void main()
{
	struct PersonInfo
	{
		int index;
		char name[30];
		short age;
	}Person[5]={{1,"张三",20},
				{2,"李可可",21},
				{3,"宋桥",22},
				{4,"元员",22},
				{5,"王冰冰",22}};

	struct PersonInfo *pPersonInfo;
	pPersonInfo=Person;
	for(int i=0;i<5;i++,pPersonInfo++)
	{
		cout << pPersonInfo->index << endl;
		cout << pPersonInfo->name << endl;
		cout << pPersonInfo->age << endl;
	}
}
