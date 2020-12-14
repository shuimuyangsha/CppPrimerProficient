#include <iostream>
using namespace std;
class CNode									//����һ���ڵ���
{
public:
	CNode *m_pNext;							//����һ���ڵ�ָ�룬ָ����һ���ڵ�
	int   m_Data;								//����ڵ������
	CNode()									//����ڵ���Ĺ��캯��
	{
		m_pNext = NULL;						//��m_pNext����Ϊ��
	}
};

template <class Type>							//������ģ��
class CList									//����CList��
{
private:
	Type *m_pHeader;							//����ͷ�ڵ�
	int   m_NodeSum;							//�ڵ�����
public:
	CList()									//���幹�캯��
	{
		m_pHeader = NULL;						//��m_pHeader��Ϊ��
		m_NodeSum = 0;						//��m_NodeSum��Ϊ0
	}
	Type* MoveTrail()							//��ȡβ�ڵ�
	{
		Type *pTmp = m_pHeader;				//����һ����ʱ�ڵ㣬����ָ��ͷ�ڵ�
		for (int i=1;i<m_NodeSum;i++)				//��������
		{
			pTmp = pTmp->m_pNext;				//����һ���ڵ�ָ��ǰ�ڵ�
		}
		return pTmp;							//����β�ڵ�
	}
	void AddNode(Type *pNode)					//��ӽڵ�
	{	
		if (m_NodeSum == 0)					//�ж������Ƿ�Ϊ��
		{
			m_pHeader = pNode;				//��ͷ�ڵ㴦��ӽڵ�
		}
		else									//����Ϊ��
		{
			Type* pTrail = MoveTrail();			//��ȡβ�ڵ�
			pTrail->m_pNext = pNode;			//��β�ڵ㴦��ӽڵ�
		}
		m_NodeSum++;						//ʹ�ڵ�������1
	}
	void PassList()								//��������
	{
		if (m_NodeSum > 0)						//�ж������Ƿ�Ϊ��
		{
			Type* pTmp = m_pHeader;			//����һ����ʱ�ڵ㣬����ָ��ͷ�ڵ�
			printf("%4d",pTmp->m_Data);			//���ͷ�ڵ�����
			for (int i=1;i<m_NodeSum;i++)			//����ѭ�����ʽڵ�
			{
				pTmp = pTmp->m_pNext;			//��ȡ��һ���ڵ�
				printf("%4d",pTmp->m_Data);		//����ڵ�����
			}
		}
	}
	~CList()									//������������
	{
		if (m_NodeSum > 0)						//�ж������Ƿ�Ϊ��
		{
			Type *pDelete = m_pHeader;			//����һ����ʱ�ڵ㣬����ָ��ͷ�ڵ�
			Type *pTmp = NULL;				//����һ����ʱ�ڵ�
			for(int i=0; i< m_NodeSum; i++)			//����ѭ���������нڵ�
			{
				pTmp = pDelete->m_pNext;		//����һ���ڵ�ָ��ǰ�ڵ�
				delete pDelete;					//�ͷŵ�ǰ�ڵ�
				pDelete = pTmp;				//����ǰ�ڵ�ָ����һ���ڵ�
			}
			m_NodeSum = 0;					//���ýڵ�����Ϊ0
			pDelete = NULL;					//��pDelete��Ϊ��
			pTmp = NULL;						//��pTmp��Ϊ��
		}
		m_pHeader = NULL;						//��m_pHeader��Ϊ��
	}
};


class CNet									//����һ���ڵ���
{
public:
	CNet *m_pNext;							//����һ���ڵ���ָ��
	char   m_Data;							//����ڵ�������ݳ�Ա
	CNet()									//���幹�캯��
	{
		m_pNext = NULL;						//��m_pNext��Ϊ��
	}
};
int main(int argc, char* argv[])
{
	CList<CNode> nodelist;						//����һ����ģ��ʵ��
	for(int n=0; n<5; n++)						//����ѭ������������ӽڵ�
	{
		CNode *pNode = new CNode();			//�����ڵ����
		pNode->m_Data = n;					//���ýڵ�����
		nodelist.AddNode(pNode);				//����������ӽڵ�
	}
	nodelist.PassList();							//��������
	cout <<endl;								//�������
	CList<CNet> netlist;						//����һ����ģ��ʵ��
	for(int i=0; i<5; i++)							//����ѭ������������ӽڵ�
	{
		CNet *pNode = new CNet();				//�����ڵ����
		pNode->m_Data = 97+i;					//���ýڵ�����
		netlist.AddNode(pNode);					//����������ӽڵ�
	}
	netlist.PassList();							//��������
	cout << endl;								//�������
	return 0;
}
