#include <iostream>
using namespace std;
void main()
{
	char iInput;
	cin >> iInput;
	if(iInput = 'A')
	{
		cout << "very good" <<endl;
		return ;
	}
	if(iInput = 'B')
	{
		cout << "good" <<endl;
		return ;
	}
	if(iInput = 'C')
	{
		cout << "normal" <<endl;
		return ;
	}
	if(iInput = 'D')
	{
		cout << "failure" <<endl;
		return ;
	}
	cout << "input error" << endl;
}


