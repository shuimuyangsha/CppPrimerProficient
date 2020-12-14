#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file("test.txt",ios::in);
	if(!file.fail())
	{
		while(!file.eof())
		{
			char buf[128];
			file.getline(buf,128);
			if(file.tellg()>0)
			{
				cout << buf;
				cout << endl;
			}
		}
	}
	else
		cout << "can not open" << endl;;
	file.close();
	return 0;
}
