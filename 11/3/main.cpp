#include <iostream>
using namespace std;
class CEmployee								//����CEmployee��
{
public:
	int m_ID;									//�������ݳ�Ա
	char m_Name[128];						//�������ݳ�Ա
	char m_Depart[128];						//�������ݳ�Ա
	CEmployee()								//���幹�캯��
	{
		cout << "CEmployee�๹�캯��������"<< endl;		//�����Ϣ
	}
	~CEmployee()								//��������
	{
		cout << "CEmployee����������������"<< endl;		//�����Ϣ
	}
};
class COperator :public CEmployee			//����COperator��
{
public:
	char m_Password[128];			//�������ݳ�Ա
	void OutputName()					//����OutputName��Ա����
	{
		cout << "����Ա����: "<< m_Name<< endl;	//�������Ա����
	}
	bool Login()						//��ӳ�Ա����
	{
		if (strcmp(m_Name,"MR")==0 &&	//�Ƚ��û���
			strcmp(m_Password,"KJ")==0)	//�Ƚ�����
		{
			cout << "��¼�ɹ�"<< endl;			//�����Ϣ
			return true;				//���ؽ��
		}
		else
		{
			cout << "��¼ʧ��"<< endl;			//�����Ϣ
			return false;				//���ؽ��
		}
	}
};
int main(int argc, char* argv[])				//����Ա����
{
	COperator optr;						//����COperator����
	strcpy(optr.m_Name,"MR");			//����m_Name���ݳ�Ա
	optr.OutputName();					//����COperator���OutputName��Ա����
	return 0;
}
