#include <iostream>
using namespace std;
//定义CPerson类
class CPerson
{
	public:
		CPerson();
	CPerson(int iIndex,short m_shAge,double m_dSalary);
	int m_iIndex;
	short m_shAge;
	double m_dSalary;
	int getIndex();
	short getAge();
	double getSalary();
};
//在默认构造函数中初始化
CPerson::CPerson()
{
	m_iIndex=0;
	m_shAge=10;
	m_dSalary=1000;
}
//在带参数的构造函数中初始化
CPerson::CPerson(int iIndex,short m_shAge,double m_dSalary)
{
	m_iIndex=iIndex;
	m_shAge=m_shAge;
	m_dSalary=m_dSalary;
}
int CPerson::getIndex() 
{ 
	return m_iIndex; 
}
//在main函数中输出类的成员值
void main()
{
	CPerson p1;
	cout << "m_iIndex is:" << p1.getIndex() << endl;

	CPerson p2(1,20,1000);
	cout << "m_iIndex is:" << p2.getIndex() << endl;
}
