#include <iostream>
using namespace std;
class CEmployee								//定义CEmployee类
{
public:
	int m_ID;									//定义数据成员
	char m_Name[128];						//定义数据成员
	char m_Depart[128];						//定义数据成员
	CEmployee()								//定义构造函数
	{
		cout << "CEmployee类构造函数被调用"<< endl;		//输出信息
	}
	~CEmployee()								//析构函数
	{
		cout << "CEmployee类析构函数被调用"<< endl;		//输出信息
	}
};
class COperator :public CEmployee			//定义COperator类
{
public:
	char m_Password[128];			//定义数据成员
	void OutputName()					//定义OutputName成员函数
	{
		cout << "操作员姓名: "<< m_Name<< endl;	//输出操作员姓名
	}
	bool Login()						//添加成员函数
	{
		if (strcmp(m_Name,"MR")==0 &&	//比较用户名
			strcmp(m_Password,"KJ")==0)	//比较密码
		{
			cout << "登录成功"<< endl;			//输出信息
			return true;				//返回结果
		}
		else
		{
			cout << "登录失败"<< endl;			//输出信息
			return false;				//返回结果
		}
	}
};
int main(int argc, char* argv[])				//主成员函数
{
	COperator optr;						//定义COperator对象
	strcpy(optr.m_Name,"MR");			//设置m_Name数据成员
	optr.OutputName();					//调用COperator类的OutputName成员函数
	return 0;
}
