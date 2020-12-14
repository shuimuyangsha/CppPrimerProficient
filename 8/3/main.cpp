#include <iostream>
using namespace std;
void main()
{
	struct PersonInfo
	{
		int index;
		char name[30];
		short age;
		struct WorkPlace
		{
			char Address[150];
			char PostCode[30];
			char GateCode[50];
			char Street[100];
			char Area[50];
		}WP;
};

	PersonInfo pInfo;
	strcpy(pInfo.WP.Address,"House");
	strcpy(pInfo.WP.PostCode,"10000");
	strcpy(pInfo.WP.GateCode,"302");
	strcpy(pInfo.WP.Street,"Lan Tian");
	strcpy(pInfo.WP.Area,"china");

	cout << pInfo.WP.Address << endl;
	cout << pInfo.WP.PostCode << endl;
	cout << pInfo.WP.GateCode<< endl;
	cout << pInfo.WP.Street << endl;
	cout << pInfo.WP.Area << endl;
}
