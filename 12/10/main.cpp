#include <iostream>
using namespace std;
template <class Type>
class CList		//����CList��
{
private:
	Type *m_pHeader; 
	int   m_NodeSum; 
public:	
	static int m_ListValue;		//���徲̬���ݳ�Ա
	CList()
	{
		m_pHeader = NULL;	
		m_NodeSum = 0;
	}
};
class CNode		//����CNode��
{
public:
	CNode *m_pNext;
	int   m_Data;
	CNode()
	{
		m_pNext = NULL;
	}
};
class CNet		//����CNet��
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
int CList<Type>::m_ListValue = 10;// //��ʼ����̬���ݳ�Ա
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
