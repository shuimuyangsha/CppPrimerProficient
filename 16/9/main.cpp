#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream ifile("test.txt");
	if(!ifile.fail())
	{
		while(!ifile.eof())
		{
			char ch;
			streampos sp = ifile.tellg();
			ifile.get(ch);
			if(ch == ' ' )
			{
				cout << "postion:" << sp ;
				cout <<"is blank "<< endl;
			}
		}
	}
	return 0;
}
