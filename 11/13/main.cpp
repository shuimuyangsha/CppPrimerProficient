#include <iostream>
using namespace std;
class Teacher
{
public:
	Teacher(int i)
	{
		iZhiWu=i;
	}
protected:
	int iZhiWu;
};
class Level
{
public:
	Level(int j)
	{
		iZhiCheng=j;
	}
protected:
	int iZhiCheng;
};

class Teacher_Level : public Teacher,Level
{
public:
	Teacher_Level(int a,int b,int c):Teacher(a),Level(b)
	{
		iGongZi=c;
	}
	Show()
	{
		cout << "ְ��:" << iZhiWu << endl;
		cout << "ְ��:" << iZhiCheng << endl;
		cout << "����:" << iGongZi << endl;
	}
protected:
	int iGongZi;
};
void main()
{
	Teacher_Level myObj(20,30,40);
	myObj.Show();
}