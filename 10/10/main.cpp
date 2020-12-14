#include<iostream>
using namespace std;
#define PI 3.14
class CCylinder
{
public :
	CCylinder()
	{
		m_iRadius=0;
		m_iHeight=0;
	}
	CCylinder(int iRadius,int iHeight)
	{
		m_iRadius=iRadius;
		m_iHeight=iHeight;
	}
	int getArea()
	{
		return PI*m_iRadius*m_iRadius*m_iHeight;
	}
	void setRadius(int iRadius)
	{
		m_iRadius=iRadius;
	}
	void setHeight(int iHeight)
	{
		m_iHeight=iHeight;
	}
	int getRadius()
	{
		return m_iRadius;
	}
	int getHeight()
	{
		return m_iHeight;
	}
protected:
	int m_iRadius;
	int m_iHeight;
};
int main()
{
	CCylinder cld;
	int i,j;
	cout << "����Բ���İ뾶" << endl;
		cin >> i;
		cld.setRadius(i); //����Բ���İ뾶
	cout << "����Բ���ĸ߶�" << endl;
		cin >> j;
		cld.setHeight(j); //����Բ���ĸ�
	cout << "Բ���İ뾶Ϊ��" << cld.getRadius()<<endl;
	cout << "Բ���ĸ߶�Ϊ��" << cld.getHeight()<< endl;
	cout << "Բ�������Ϊ��" << cld.getArea()<< endl;
	return 1;
}

