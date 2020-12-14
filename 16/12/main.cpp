#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	char file[50];
	cout <<"Input file name£º"<<"\n";
	cin >>file;
	if(!remove(file))
	{
		cout <<"The file:"<<file<<"ÒÑÉ¾³ý"<<"\n";
	}
	else
	{
		cout <<"The file:"<<file<<"É¾³ýÊ§°Ü"<<"\n";
	}
}
