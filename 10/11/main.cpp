#include<iostream>
using namespace std;
class Student
{
public:
void SetInfor(char* cName,short sSex,int iGrade,int iClass)
{
	strcpy(m_cName,cName);
	if(sSex!=1)
		m_sSex=0;
	else
		m_sSex=1;
	m_iGrade=iGrade;
	m_iClass=iClass;
}
void ShowInfor()
{
	cout << "����:" <<m_cName << endl;
	if(m_sSex==1)
		cout << "�Ա�:��" << endl;
	else
		cout << "�Ա�:Ů" << endl;
	cout << "�꼶:" << m_iGrade << endl;
	cout << "�༶:" << m_iClass << endl;
}
protected:
	char m_cName[128];
	short m_sSex;//1�����к���0����Ů��
	int m_iGrade;
	int m_iClass;
	
};

int main()
{
	Student st;
	char cName[128];
	int iGrade=0;
	int iClass=0;
	short sSex=0;
	cout << "��������" << endl;
	cin >> cName;
	cout << "�����Ա�1�����к���0����Ů��" << endl;
	cin >> sSex;
	cout << "�����꼶" << endl;
	cin >> iGrade;
	cout << "����༶" << endl;
	cin >> iClass;
	st.SetInfor(cName,sSex,iGrade,iClass);
	st.ShowInfor();
	
	
}

