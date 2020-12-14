#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;
int main()
{
	
	ifstream infile;
	ofstream outfile;
	char namesrc[20];
	char namedes[20];
	char c;
	cout<<"请输入含有字母的文件："<<"\n";
	cin>>namesrc;
	infile.open(namesrc);
	if(!infile)
	{
		cout<<"文件打开失败！";
		exit(1);
	}

	
	cout<<"请输入目标文件："<<"\n";
	cin >> namedes;
	outfile.open(namedes,ios::app);
	if(!outfile)
	{
		cout<<"文件打开失败！";
		exit(1);
	}
	while(infile.get(c))
	{
		if(c>'A' || c<'z')
			outfile << c;
	}
	cout<<"复制完成"<< endl;
	infile.close();
	outfile.close();
	return 0;
	

}
