#include <iostream>
#include <string>
using namespace std;
class CCustomError							//�쳣��
{
private:
	int m_ErrorID;							//�쳣ID
	char m_Error[255];						//�쳣��Ϣ
public:
	CCustomError()							//���캯��
	{
		m_ErrorID = 1;
		strcpy(m_Error,"�����쳣��");
	}
	int GetErrorID(){ return m_ErrorID; }		//��ȡ�쳣ID
	char * GetError(){ return m_Error; }		//��ȡ�쳣��Ϣ
};
int main(int argc, char* argv[])
{
	try
	{
		throw "�ַ����쳣��";
		//throw (new CCustomError());		//�׳��쳣
	}
	catch(CCustomError* error)
	{
		//����쳣��Ϣ
		cout << "�쳣ID��" << error->GetErrorID() << endl;
		cout << "�쳣��Ϣ��" << error->GetError() << endl;
	}
	catch(char * error)
	{
		cout << "�쳣��Ϣ��" << error << endl;
	}
	return 0;
}