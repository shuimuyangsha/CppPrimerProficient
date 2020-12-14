#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	ifstream infile;
	ofstream outfile;
	char name[20];
	char c;
	cout<<"请输入文件："<<"\n";
	cin>>name;
	infile.open(name);
	if(!infile)
	{
		cout<<"文件打开失败！";
		exit(1);
	}
	strcat(name,"复本");
	cout<< "start copy" << endl;
	outfile.open(name);
	if(!outfile)
	{
		cout<<"无法复制";
		exit(1);
	}
	while(infile.get(c))
	{
		outfile << c;
	}
	cout<<"start end"<< endl;
	infile.close();
	outfile.close();
	return 0;
}
