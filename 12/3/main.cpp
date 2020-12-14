#include <iostream>
using namespace std;
template<class T1,class T2>
class MyTemplate
{
	T1 t1;
	T2 t2;
	public:
		MyTemplate(T1 tt1,T2 tt2)
		{t1 =tt1, t2=tt2;}
		void display()
		{ cout << t1 << ' ' << t2 << endl;}
};
void main()
{
	int a=123;
	double b=3.1415;
	MyTemplate<int ,double> mt(a,b);
	mt.display();
}
