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
	cout << "�����ѡ������:" << endl;
	cin >> iCount ;
	for(int j=0;j<3;j++)
	{
		cout << "�����"<<j+1<<"����ѡ������:" << endl;
		cin >> p[j].name;
	}
	//��ѡ������ģ��
	for(int i=0;i<iCount;i++)
	{
		for(int n=0;n<3;n++)
			cout << "ѡ" << p[n].name<< "��" << n<< endl;
		cin >> iInput;
		if(iInput>2)
		{
			cout << "Err" << endl;
			return 0;
		}
		else
			p[iInput].iVote++;
	}
	//ͳ��ģ��
	for(int m=0;m<3;m++)
	{
		cout << p[m].name << "ѡƱ��Ϊ:" << p[m].iVote << endl;
	}
	return 1;
}

