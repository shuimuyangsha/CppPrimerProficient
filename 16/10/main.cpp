#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream ifile;
	char cFileSelect[20];
	cout << "input filename:";
	cin >> cFileSelect;
	ifile.open(cFileSelect);
	if(!ifile)
	{
		cout << cFileSelect << "can not open" << endl;
		return 0;
	}
	ifile.seekg(0,ios::end);
	int maxpos=ifile.tellg();
	int pos;
	cout << "Position:";
	cin >> pos;
	if(pos > maxpos)
	{
		cout << "is over file lenght" << endl;
	}
	else
	{
		char ch;
		ifile.seekg(pos);
		ifile.get(ch);
		cout << ch <<endl;
	}
	ifile.close();
	return 1;
}
