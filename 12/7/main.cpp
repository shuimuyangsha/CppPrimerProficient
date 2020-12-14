#include <iostream>
using namespace std;
class Date
{
	int iMonth,iDay,iYear;
	char Format[128];
public:
	Date(int m=0,int d=0,int y=0)
	{
		iMonth=m;
		iDay=d;
		iYear=y;
	}
	friend ostream& operator<<(ostream& os,const Date t)
	{
		cout << "Month: " << t.iMonth << ' ' ;
		cout << "Day: " << t.iDay<< ' ';
		cout << "Year: " << t.iYear<< ' ' ;
		return os;
		
	}
	void Display()
	{
		cout << "Month: " << iMonth;
		cout << "Day: " << iDay;
		cout << "Year: " << iYear;
		cout << std::endl;
	}
};
template <class T>
class Set
{
	T t;
	public:
		Set(T st) : t(st) {}
		void Display();
};
template <class T>
void Set<T>::Display()
{
	cout << t << endl;
}
void Set<Date>::Display()
{
	cout << "Date: " << t << endl;
}
void main()
{
	Set<int> intset(123);
	Set<Date> dt =Date(1,2,3);
	intset.Display();
	dt.Display();
}
