#include<iostream>
using namespace std;
int main()
{
	double iResult=0;
	int iInput=0;
	cout << "输入工资" << endl;
	cin >> iInput;
	if(iInput <=0)
	{
		cout << "输入错误" << endl;
		return 0;
	}
	if(iInput >= 5000)
	{
		iResult=1.1*iInput;
		cout<< "调整后工资为：" << iResult <<endl;
	}
	else if(iInput >= 2500 && iInput < 5000)
	{
		iResult=1.15*iInput;
		cout << "调整后工资为：" <<  iResult << endl;
	}
	else if(iInput < 2500)
	{
		iResult=1.2*iInput;
		cout << "调整后工资为：" << iResult << endl;
	}

	return 1;
}
