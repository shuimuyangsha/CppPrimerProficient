#include <iostream>
using namespace std;
class CEmployee								//定义CEmployee类
{
public:
	int m_ID;									//定义数据成员
	char m_Name[128];							//定义数据成员
	char m_Depart[128];							//定义数据成员
	CEmployee()								//定义构造函数
	{
		cout << "CEmployee类构造函数被调用"<< endl;		//输出信息
	}
	~CEmployee()								//析构函数
	{
		cout << "CEmployee类析构函数被调用"<< endl;		//输出信息
	}
};
class COperator :public CEmployee					//从CEmployee类派生一个子类
{
public:
	char m_Password[128];						//定义数据成员
	COperator()								//定义构造函数
	{
		strcpy(m_Name,"MR");					//设置数据成员
		cout << "COperator类构造函数被调用"<< endl;		//输出信息
	}
	~COperator()								//析构函数
	{
		cout << "COperator类析构函数被调用"<< endl;		//输出信息
	}
};
int main(int argc, char* argv[])						//主函数
{
	COperator optr;								//定义一个COperator对象
	return 0;
}
