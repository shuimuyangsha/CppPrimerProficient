#include <iostream>
using namespace std;

class CEmployee						//定义CEmployee类
{
public:
	int m_ID;							//定义数据成员
	char m_Name[128];					//定义数据成员
	char m_Depart[128];					//定义数据成员
	virtual void OutputName() = 0;			//定义抽象成员函数
};

class COperator :public CEmployee				//定义COperator类，派生于CEmployee类
{
public:
	char m_Password[128];				//定义数据成员
	void OutputName()						//实现父类中的纯虚成员函数
	{
		cout << "操作员姓名: "<<m_Name<< endl;		//输出信息
	}
	COperator()							//定义COperator类的默认构造函数
	{
		strcpy(m_Name,"MR");				//设置数据成员m_Name信息
	}
};
class CSystemManager :public CEmployee		//定义CSystemManager类
{
public:
	char m_Password[128];				//定义数据成员
	void OutputName()						//实现父类中的纯虚成员函数
	{
		cout << "系统管理员姓名: "<<m_Name<< endl;	//输出信息
	}
	CSystemManager()						//定义CSystemManager类的默认构造函数
	{
		strcpy(m_Name,"SK");				//设置数据成员m_Name信息
	}
};
int main(int argc, char* argv[])					//主函数
{
	CEmployee *pWorker;					//定义CEmployee类型指针对象
	pWorker = new COperator();				//调用COperator类的构造函数为pWorker赋值
	pWorker->OutputName();				//调用COperator类的OutputName成员函数
	delete pWorker;						//释放pWorker对象
	pWorker = NULL;						//将pWorker对象设置为空
	pWorker = new CSystemManager();			//调用CSystemManager类的构造函数与为pWorker赋值
	pWorker->OutputName();				//调用CSystemManager类的OutputName成员函数
	delete pWorker;						//释放pWorker对象
	pWorker = NULL;						//将pWorker对象设置为空
	return 0;
}
