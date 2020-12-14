#include <iostream>
using namespace std;
void main()
{
	int iInput;
	cout << "Input a value:" << endl;
	cin >> iInput; //输入一整型数
	if(iInput%2!=0) 
		cout << "The value is odd number" << endl;
	else
		cout << "The value is even number" << endl;
}
