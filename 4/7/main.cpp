#include<iostream>
using namespace std;
void main()
{
	int iInput;
    cout << "Input number" << endl;
	cin >> iInput;//从键盘中输入一个数
	(iInput%3==0)? 
		((iInput%5==0) ? cout << "yes" : cout << "no" )
		: cout << "no";	
	cout << endl;
}

