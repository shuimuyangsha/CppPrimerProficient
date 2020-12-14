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
	cout << "输入圆柱的半径" << endl;
		cin >> i;
		cld.setRadius(i); //设置圆柱的半径
	cout << "输入圆柱的高度" << endl;
		cin >> j;
		cld.setHeight(j); //设置圆柱的高
	cout << "圆柱的半径为：" << cld.getRadius()<<endl;
	cout << "圆柱的高度为：" << cld.getHeight()<< endl;
	cout << "圆柱的体积为：" << cld.getArea()<< endl;
	return 1;
}

