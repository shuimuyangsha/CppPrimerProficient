#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ofstream ofile("test.txt", ios::app); 
	if(!ofile.fail())
	{
		cout << "start write " << endl;
		ofile << "Mary ";
		ofile << "girl ";
		ofile << "20 ";
	}
	else
		cout << "can not open";
	return 0;

}
