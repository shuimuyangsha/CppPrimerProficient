#include <iostream>
#include <string.h>
using namespace std;
class CPerson
{
	public:
	CPerson();
	~CPerson();//Îö¹¹º¯Êý
	char* m_pMessage;
	void ShowStartMessage();
	void ShowFrameMessage();
};
CPerson::CPerson()
{
	 m_pMessage = new char[2048];
}
void CPerson::ShowStartMessage()
{	
	strcpy(m_pMessage,"Welcome to MR");
	cout << m_pMessage << endl;
}
void CPerson::ShowFrameMessage()
{	
	strcpy(m_pMessage,"**************");
	cout << m_pMessage << endl;
}
CPerson::~CPerson()
{
	delete[] m_pMessage;
}
