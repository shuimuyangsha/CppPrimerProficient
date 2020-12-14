#include<iostream>
using namespace std;
struct Person
{
	char name[128];
	int iVote;
};
int main()
{
	Person p[3];
	for(int k=0;k<3;k++)
	{
		p[k].iVote=0;
	}
	int iCount;
	int iInput;
	cout << "输入参选人数量:" << endl;
	cin >> iCount ;
	for(int j=0;j<3;j++)
	{
		cout << "输入第"<<j+1<<"个候选人姓名:" << endl;
		cin >> p[j].name;
	}
	//候选人输入模块
	for(int i=0;i<iCount;i++)
	{
		for(int n=0;n<3;n++)
			cout << "选" << p[n].name<< "按" << n<< endl;
		cin >> iInput;
		if(iInput>2)
		{
			cout << "Err" << endl;
			return 0;
		}
		else
			p[iInput].iVote++;
	}
	//统计模块
	for(int m=0;m<3;m++)
	{
		cout << p[m].name << "选票数为:" << p[m].iVote << endl;
	}
	return 1;
}

