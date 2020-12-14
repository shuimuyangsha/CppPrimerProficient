#include <iostream>
using namespace std;
class CEmployee							//定义员工类
{
public:
	int m_ID;								//定义员工ID
	char m_Name[128];						//定义员工姓名
	char m_Depart[128];						//定义所属部门
	CEmployee()							//定义默认构造函数
	{
		memset(m_Name,0,128);				//初始化m_Name
		memset(m_Depart,0,128);			//初始化m_Depart
	}
void OutputName()							//定义共有成员函数
{
	cout <<"员工姓名"<<m_Name<<endl;		//输出员工姓名
}
};
class COperator :public CEmployee				//定义一个操作员类，从CEmployee类派生而来
{
public:
	char m_Password[128];					//定义密码
	bool Login()							//定义登录成员函数
	{
		if (strcmp(m_Name,"MR")==0 &&		//比较用户名
 			strcmp(m_Password,"KJ")==0)		//比较密码
		{
		cout<<"登录成功!"<<endl;			//输出信息
			return true;					//设置返回值
		}
		else
		{
			cout<<"登录失败!"<<endl;			//输出信息
			return false;					//设置返回值
		}
	}
};
int main(int argc, char* argv[])
{
	COperator optr;							//定义一个COperator类对象
	strcpy(optr.m_Name,"MR");				//访问基类的m_Name成员
	strcpy(optr.m_Password,"KJ");				//访问m_Password成员
	optr.Login();							//调用COperator类的Login成员函数
	optr.OutputName();						//调用基类CEmployee的OutputName成员函数
	return 0;
}
