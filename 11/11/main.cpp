#include <iostream>
using namespace std;

class CEmployee						//����CEmployee��
{
public:
	int m_ID;							//�������ݳ�Ա
	char m_Name[128];					//�������ݳ�Ա
	char m_Depart[128];					//�������ݳ�Ա
	virtual void OutputName() = 0;			//��������Ա����
};

class COperator :public CEmployee				//����COperator�࣬������CEmployee��
{
public:
	char m_Password[128];				//�������ݳ�Ա
	void OutputName()						//ʵ�ָ����еĴ����Ա����
	{
		cout << "����Ա����: "<<m_Name<< endl;		//�����Ϣ
	}
	COperator()							//����COperator���Ĭ�Ϲ��캯��
	{
		strcpy(m_Name,"MR");				//�������ݳ�Աm_Name��Ϣ
	}
};
class CSystemManager :public CEmployee		//����CSystemManager��
{
public:
	char m_Password[128];				//�������ݳ�Ա
	void OutputName()						//ʵ�ָ����еĴ����Ա����
	{
		cout << "ϵͳ����Ա����: "<<m_Name<< endl;	//�����Ϣ
	}
	CSystemManager()						//����CSystemManager���Ĭ�Ϲ��캯��
	{
		strcpy(m_Name,"SK");				//�������ݳ�Աm_Name��Ϣ
	}
};
int main(int argc, char* argv[])					//������
{
	CEmployee *pWorker;					//����CEmployee����ָ�����
	pWorker = new COperator();				//����COperator��Ĺ��캯��ΪpWorker��ֵ
	pWorker->OutputName();				//����COperator���OutputName��Ա����
	delete pWorker;						//�ͷ�pWorker����
	pWorker = NULL;						//��pWorker��������Ϊ��
	pWorker = new CSystemManager();			//����CSystemManager��Ĺ��캯����ΪpWorker��ֵ
	pWorker->OutputName();				//����CSystemManager���OutputName��Ա����
	delete pWorker;						//�ͷ�pWorker����
	pWorker = NULL;						//��pWorker��������Ϊ��
	return 0;
}
