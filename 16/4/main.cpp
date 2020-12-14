#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file("test.txt",ios::out);
	if(!file.fail())
	{
		cout << "start write " << endl;
		file << "name" << " ";
		file << "sex" << " ";
		file << "age" << endl;
	}
	else
		cout << "can not open" << endl;
	file.close();
	return 0;
}
