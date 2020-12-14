#include <iostream>
using namespace std;
template <class Type>
class CList		//定义CList类
{
private:
	Type *m_pHeader; 
	int   m_NodeSum; 
public:	
	static int m_ListValue;		//定义静态数据成员
	CList()
	{
		m_pHeader = NULL;	
		m_NodeSum = 0;
	}
};
class CNode		//定义CNode类
{
public:
	CNode *m_pNext;
	int   m_Data;
	CNode()
	{
		m_pNext = NULL;
	}
};
class CNet		//定义CNet类
{
public:
	CNet *m_pNext;
	char   m_Data;
	CNet()
	{
		m_pNext = NULL;
	}
};
template <class Type>
int CList<Type>::m_ListValue = 10;// //初始化静态数据成员
int main(int argc, char* argv[])
{
	CList<CNode> nodelist;
	nodelist.m_ListValue = 2008;
	CList<CNet> netlist;
	netlist.m_ListValue = 88;	
	cout<<nodelist.m_ListValue<< endl;
	cout<<netlist.m_ListValue<<endl;
	return 0;
}
