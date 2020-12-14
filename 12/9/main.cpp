#include <iostream>
using namespace std;
class CNode									//定义一个节点类
{
public:
	CNode *m_pNext;							//定义一个节点指针，指向下一个节点
	int   m_Data;								//定义节点的数据
	CNode()									//定义节点类的构造函数
	{
		m_pNext = NULL;						//将m_pNext设置为空
	}
};

template <class Type>							//定义类模板
class CList									//定义CList类
{
private:
	Type *m_pHeader;							//定义头节点
	int   m_NodeSum;							//节点数量
public:
	CList()									//定义构造函数
	{
		m_pHeader = NULL;						//将m_pHeader置为空
		m_NodeSum = 0;						//将m_NodeSum置为0
	}
	Type* MoveTrail()							//获取尾节点
	{
		Type *pTmp = m_pHeader;				//定义一个临时节点，将其指向头节点
		for (int i=1;i<m_NodeSum;i++)				//遍历链表
		{
			pTmp = pTmp->m_pNext;				//将下一个节点指向当前节点
		}
		return pTmp;							//返回尾节点
	}
	void AddNode(Type *pNode)					//添加节点
	{	
		if (m_NodeSum == 0)					//判断链表是否为空
		{
			m_pHeader = pNode;				//在头节点处添加节点
		}
		else									//链表不为空
		{
			Type* pTrail = MoveTrail();			//获取尾节点
			pTrail->m_pNext = pNode;			//在尾节点处添加节点
		}
		m_NodeSum++;						//使节点数量加1
	}
	void PassList()								//遍历链表
	{
		if (m_NodeSum > 0)						//判断链表是否为空
		{
			Type* pTmp = m_pHeader;			//定义一个临时节点，将其指向头节点
			printf("%4d",pTmp->m_Data);			//输出头节点数据
			for (int i=1;i<m_NodeSum;i++)			//利用循环访问节点
			{
				pTmp = pTmp->m_pNext;			//获取下一个节点
				printf("%4d",pTmp->m_Data);		//输出节点数据
			}
		}
	}
	~CList()									//定义析构函数
	{
		if (m_NodeSum > 0)						//判断链表是否为空
		{
			Type *pDelete = m_pHeader;			//定义一个临时节点，将其指向头节点
			Type *pTmp = NULL;				//定义一个临时节点
			for(int i=0; i< m_NodeSum; i++)			//利用循环遍历所有节点
			{
				pTmp = pDelete->m_pNext;		//将下一个节点指向当前节点
				delete pDelete;					//释放当前节点
				pDelete = pTmp;				//将当前节点指向下一个节点
			}
			m_NodeSum = 0;					//设置节点数量为0
			pDelete = NULL;					//将pDelete置为空
			pTmp = NULL;						//将pTmp置为空
		}
		m_pHeader = NULL;						//将m_pHeader置为空
	}
};


class CNet									//定义一个节点类
{
public:
	CNet *m_pNext;							//定义一个节点类指针
	char   m_Data;							//定义节点类的数据成员
	CNet()									//定义构造函数
	{
		m_pNext = NULL;						//将m_pNext置为空
	}
};
int main(int argc, char* argv[])
{
	CList<CNode> nodelist;						//构造一个类模板实例
	for(int n=0; n<5; n++)						//利用循环向链表中添加节点
	{
		CNode *pNode = new CNode();			//创建节点对象
		pNode->m_Data = n;					//设置节点数据
		nodelist.AddNode(pNode);				//向链表中添加节点
	}
	nodelist.PassList();							//遍历链表
	cout <<endl;								//输出换行
	CList<CNet> netlist;						//构造一个类模板实例
	for(int i=0; i<5; i++)							//利用循环向链表中添加节点
	{
		CNet *pNode = new CNet();				//创建节点对象
		pNode->m_Data = 97+i;					//设置节点数据
		netlist.AddNode(pNode);					//向链表中添加节点
	}
	netlist.PassList();							//遍历链表
	cout << endl;								//输出换行
	return 0;
}
