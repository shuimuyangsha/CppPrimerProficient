#include <iostream>
using namespace std;
class CBook
{
public:
	CBook (double iPage=0);
	operator double()
	{
		return m_iPage;
	}

protected:
	int m_iPage;
};
CBook:: CBook (double iPage)
{
	m_iPage=iPage;
}
void main()
{
	CBook bk1(10.0);
	CBook bk2(20.00);
	cout << "bk1+bk2=" << double(bk1)+double(bk2) << endl;
}
