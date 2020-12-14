#include <iostream>
using namespace std;
class Number
{
	int m_iNum;
public:
	Number(int i)
	{
		m_iNum=i;
	}

	friend ostream& operator<<(ostream& os,const Number n)
	{
		cout << "m_iNum:" << n.m_iNum << endl;
		return os;
	}

	int operator >(int i)//重载>预算符
	{
		if(i > m_iNum)
			return i;
		else
		return m_iNum;
	}
};

template <class T1,class T2=Number>
class MyTemplate
{
	T1 t1;
	T2 t2;
	public:
		MyTemplate(T1 tt1,T2 tt2):t1(tt1),t2(tt2)
		{t1=tt1;t2=tt2;}
		void setTemplate(T1 tt1,T2 tt2)//用该函数从外界获得数据
		{t1=tt1;t2=tt2;}
		void Max()
		{
			if(t2>t1)//需重载<运算符
				cout << "Max:" << t2 << endl;
			else
				cout << "Max:" << t1 << endl;
		}
};


void main()
{
	MyTemplate<int,Number> my(10,12);
	my.setTemplate(11,13);
	my.Max();	
}



