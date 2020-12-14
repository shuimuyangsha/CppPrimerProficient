#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	const char* filename="test.txt";
	fstream iofile;
	iofile.open(filename,ios::in);
	if(iofile.fail())
	{
		iofile.clear();
		iofile.open(filename, ios::in| ios::out| ios::trunc);
	}
	else
	{
		iofile.close();
		iofile.open(filename, ios::in| ios::out| ios::ate);

	}
	if(!iofile.fail())
	{
		iofile << "我是新加入的";
		iofile.seekg(0);
		while(!iofile.eof())
		{
			char ch;
			iofile.get(ch);
			if(!iofile.eof())
				cout << ch;
		}
		cout << endl;
	}
	return 0;
}
