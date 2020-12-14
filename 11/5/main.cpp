#include <iostream>
using namespace std;
class CBook
{
public:
	CBook (int iPage)
	{
		m_iPage=iPage;
	}
	CBook operator+( CBook b)
	{
		return CBook (m_iPage+b.m_iPage);
	}
	void display()
	{
		cout << m_iPage << endl;
	}
protected:
	int m_iPage;
};

void main()
{
	CBook bk1(10);
	CBook bk2(20);
	CBook tmp(0);
	tmp= bk1+bk2;
	tmp.display();
}
