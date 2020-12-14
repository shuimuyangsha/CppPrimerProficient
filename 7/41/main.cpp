#include<iostream>
using namespace std;

int main()
{
	int i;
	cin >> i;
	char buf[7][10];//{"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	strcpy(buf[0],"Sunday\0");
	strcpy(buf[1],"Monday\0");
	strcpy(buf[2],"Tuesday\0");
	strcpy(buf[3],"Wednesday\0");
	strcpy(buf[4],"Thursday\0");
	strcpy(buf[5],"Friday\0");
	strcpy(buf[6],"Saturday\0");
	if(i>7 || i<0)
	{
		cout << "Input Error" << endl;
		return 0;
	}
	else
		cout << buf[i] << endl;
	return 1;
}

