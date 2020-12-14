#include<iostream>
using namespace std;
int main()
{
	struct StudentScore
	{
		char name[128];
		int MidScore;
		int FinalScore;
		int DailyScore;
	};
	
	StudentScore std[10];
	
	int iCount;
	cout << "输入学生数量" << endl;
	cin >> iCount;
	if(iCount>=10)
	{
		cout << "Over Max" << endl;
		return 0;
	}
	for(int i=0;i<iCount;i++)
	{
		cout << i <<"输入学生姓名" << endl;
		cin >> std[i].name;
		cout << "输入期中成绩" << endl;
		cin >> std[i].MidScore;
		cout << "输入期末成绩" << endl;
		cin >> std[i].FinalScore;
		cout << "输入平时成绩" << endl;
		cin >> std[i].DailyScore;
	}
	for(int j=0;j<iCount;j++)
	{
		cout << std[j].name << ":";
		cout << "综合成绩：" << (std[j].MidScore*0.3+std[j].FinalScore*0.5+ std[j].DailyScore*0.2)/3 << " ";
	}
	return 1;
}

