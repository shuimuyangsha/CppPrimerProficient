#include<iostream>
using namespace std;

int main()
{
	char name[10][10];//存储十个学生的姓名，每个学生姓名不超过10个字符
	/*
	char buf[10];
	for(int i=0;i<10;i++)
	{
		cin >> buf;
		strncpy(name[i],buf,10);//通过输入将学生姓名录入
	}
	*/
	strcpy(name[0],"Mary");
	strcpy(name[1],"Jam");
	strcpy(name[2],"Jack");
	strcpy(name[3],"Jose");
	strcpy(name[4],"Hery");
	strcpy(name[5],"Mark");
	strcpy(name[6],"Dobbs");
	strcpy(name[7],"Steven");
	strcpy(name[8],"Stanly");
	strcpy(name[9],"John");

	/*
	int score[10][2];
	for(int i=0;i<10;i++)
	{
		score[i][0]=i;
		score[i][1]=i*10;
	}
	*/
	cout << "开始输入分数：" << endl;
	int score[10][2];
	int scoretmp,itmp;
	for(int i=0;i<10;i++)
	{
		score[i][0]=i;
		cout << name[i] << endl;
		cin >> score[i][1];
	}
	
	for(int m=1;m<10;m++)
		for(int n=9;n>=m;n--)
		{
			if(score[n][1]<score[n-1][1])
			{
				scoretmp=score[n-1][1];
				itmp=score[n-1][0];
				score[n-1][1]=score[n][1];
				score[n-1][0]=score[n][0];
				score[n][1]=scoretmp;
				score[n][0]=itmp;
			}
		}
	for(int j=0;j<10;j++)
	{
		cout << name[score[j][0]] ;
		cout << score[j][1] << endl;
	}
}

