#include <iostream>
using namespace std;
struct PersonInfo
{
	int index;
	char name[30];
	short age;
};
void ShowStuctMessage(struct PersonInfo *pInfo)
{
	cout << pInfo->index << endl;
	cout << pInfo->name << endl;
	cout << pInfo->age<< endl;

}
void main()
{
	
	PersonInfo pInfo;
	pInfo.index=1;
	strcpy(pInfo.name,"ÕÅÈý");
	pInfo.age=20;
	ShowStuctMessage(&pInfo);
}
