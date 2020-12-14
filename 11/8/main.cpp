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
		memset(m_Name,0,128);					//初始化数据成员
		memset(m_Depart,0,128);				//初始化数据成员
	}
	virtual void OutputName()						//定义一个虚成员函数
	{
		cout << "员工姓名: "<<m_Name << endl;			//输出信息
	}
};
class COperator :public CEmployee					//从CEmployee类派生一个子类
{
public:
	char m_Password[128];						//定义数据成员
	void OutputName()							//定义OutputName虚函数
	{
		cout << "操作员姓名: "<<m_Name<< endl;			//输出信息
	}
};
int main(int argc, char* argv[])
{
	CEmployee *pWorker = new COperator();	//定义CEmployee类型指针，调用COperator类构造函数
	strcpy(pWorker->m_Name,"MR");		//设置m_Name数据成员信息
	pWorker->OutputName();				//调用COperator类的OutputName成员函数
	delete pWorker;					//释放对象
	return 0;
}
