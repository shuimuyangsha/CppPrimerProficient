#include <iostream>
class CItem;								//前导声明CItem类
class CList								//定义CList类
{
private:
	CItem * m_pItem;						//定义私有数据成员m_pItem
public:
	CList();								//定义默认构造函数
	~CList();								//定义析构函数
	void OutputItem();						//定义OutputItem成员函数
};
class CItem								//定义CItem类
{
friend void CList::OutputItem();				//声明友元函数
private:
	char m_Name[128];						//定义私有数据成员
	void OutputName()						//定义私有成员函数
	{
		printf("%s\n",m_Name);				//输出数据成员信息
	}
public:
	void SetItemName(const char* pchData)		//定义共有方法
	{
		if (pchData != NULL)					//判断指针是否为空
		{
			strcpy(m_Name,pchData);		//赋值字符串
		}
	}
	CItem()								//构造函数
	{
		memset(m_Name,0,128);				//初始化数据成员m_Name
	}
};
void CList::OutputItem()						//CList类的OutputItem成员函数的实现
{
	m_pItem->SetItemName("BeiJing");			//调用CItem类的共有方法
	m_pItem->OutputName();				//在友元函数中访问CItem类的私有方法OutputName
}
CList::CList()								//CList类的默认构造函数
{
	m_pItem = new CItem();					//构造m_pItem对象
}
CList::~CList()								//CList类的析构函数
{
	delete m_pItem;						//释放m_pItem对象
	m_pItem = NULL;						//将m_pItem对象设置为空
}
int main(int argc, char* argv[])					//主函数
{
	CList list;								//定义CList对象list
	list.OutputItem();						//调用CList的OutputItem方法
	return 0;
}
