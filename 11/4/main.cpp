#include <iostream>
using namespace std;
class CEmployee	//定义CEmployee类
{
public:
	int m_ID;//定义数据成员
	char m_Name[128];//定义数据成员
	char m_Depart[128];	
	
	CEmployee()//定义构造函数
	{
	}
	~CEmployee()//析构函数
	{
	}
	void OutputName()//定义OutputName成员函数
	{
		cout << "调用CEmployee类的OutputName成员函数: "<< endl;	//输出操作员姓名
	}//定义数据成员
};
class COperator :public CEmployee//定义COperator类
{
public:
	char m_Password[128];//定义数据成员
	void OutputName()//定义OutputName成员函数
	{
		cout << "调用COperator类的OutputName成员函数:"<< endl;//输出操作员姓名
	}
	
};
int main(int argc, char* argv[])//主成员函数
{
	COperator optr;	//定义COperator对象
	optr.OutputName();//调用COperator类的OutputName成员函数
	return 0;
}
