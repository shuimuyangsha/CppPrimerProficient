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
	cout<<"�������ļ���"<<"\n";
	cin>>name;
	infile.open(name);
	if(!infile)
	{
		cout<<"�ļ���ʧ�ܣ�";
		exit(1);
	}
	strcat(name,"����");
	cout<< "start copy" << endl;
	outfile.open(name);
	if(!outfile)
	{
		cout<<"�޷�����";
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
