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
	cout << "����ѧ������" << endl;
	cin >> iCount;
	if(iCount>=10)
	{
		cout << "Over Max" << endl;
		return 0;
	}
	for(int i=0;i<iCount;i++)
	{
		cout << i <<"����ѧ������" << endl;
		cin >> std[i].name;
		cout << "�������гɼ�" << endl;
		cin >> std[i].MidScore;
		cout << "������ĩ�ɼ�" << endl;
		cin >> std[i].FinalScore;
		cout << "����ƽʱ�ɼ�" << endl;
		cin >> std[i].DailyScore;
	}
	for(int j=0;j<iCount;j++)
	{
		cout << std[j].name << ":";
		cout << "�ۺϳɼ���" << (std[j].MidScore*0.3+std[j].FinalScore*0.5+ std[j].DailyScore*0.2)/3 << " ";
	}
	return 1;
}

