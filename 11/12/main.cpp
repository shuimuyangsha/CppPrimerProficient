#include<iostream>
using namespace std;
class CSale
{
public :
	CSale();
	CSale(char *cName,int iPrice)
	{
		strncpy(m_cName,cName,128);
		m_iPrice=iPrice;
	}
	friend ostream& operator<<(ostream& os,const CSale s)
	{
		cout << "Name: " << s.m_cName << ' ' ;
		cout << "Price: " << s.m_iPrice<< ' ';
		return os;
		
	}

protected:
	char m_cName[128];
	int m_iPrice;
};
int main()
{
	CSale sale("apple",900);
	cout << sale << endl;
	return 0;
}

