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
	cout << "姓名:" <<m_cName << endl;
	if(m_sSex==1)
		cout << "性别:男" << endl;
	else
		cout << "性别:女" << endl;
	cout << "年级:" << m_iGrade << endl;
	cout << "班级:" << m_iClass << endl;
}
protected:
	char m_cName[128];
	short m_sSex;//1代表男孩，0代表女孩
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
	cout << "输入姓名" << endl;
	cin >> cName;
	cout << "输入性别，1代表男孩，0代表女孩" << endl;
	cin >> sSex;
	cout << "输入年级" << endl;
	cin >> iGrade;
	cout << "输入班级" << endl;
	cin >> iClass;
	st.SetInfor(cName,sSex,iGrade,iClass);
	st.ShowInfor();
	
	
}

