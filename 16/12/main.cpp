#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char file[50];
	cout <<"Input file name��"<<"\n";
	cin >>file;
	if(!remove(file))
	{
		cout <<"The file:"<<file<<"��ɾ��"<<"\n";
	}
	else
	{
		cout <<"The file:"<<file<<"ɾ��ʧ��"<<"\n";
	}
}
