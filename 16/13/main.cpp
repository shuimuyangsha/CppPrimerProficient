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
	cout<<"�����뺬����ĸ���ļ���"<<"\n";
	cin>>namesrc;
	infile.open(namesrc);
	if(!infile)
	{
		cout<<"�ļ���ʧ�ܣ�";
		exit(1);
	}

	
	cout<<"������Ŀ���ļ���"<<"\n";
	cin >> namedes;
	outfile.open(namedes,ios::app);
	if(!outfile)
	{
		cout<<"�ļ���ʧ�ܣ�";
		exit(1);
	}
	while(infile.get(c))
	{
		if(c>'A' || c<'z')
			outfile << c;
	}
	cout<<"�������"<< endl;
	infile.close();
	outfile.close();
	return 0;
	

}
