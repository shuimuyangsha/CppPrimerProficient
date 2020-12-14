#include <iostream>
using namespace std;
template <class T1,class T2>
class MyTemplate
{
	T1 obj1;
	T2 obj2;
public:
	MyTemplate(T1 o1,T2 o2) : obj1(o1) ,obj2(o2){}
	void display()
	{
		cout << "Object Display" << endl;
		cout << "Object 1:" << obj1 << endl;
		cout << "Object 2:" << obj2 <<endl;
		cout << endl;
	}
};
template <class T>
class MyTemplate<T, char>
{
	T obj1,obj2;
public:
	MyTemplate(T o1,char c) : obj1(o1) ,obj2(o1)
	{obj2+=(int)c;}
	void display()
	{
		cout << "Object Display" << endl;
		cout << "Object 1:" << obj1 << endl;
		cout << "Object 2:" << obj2 <<endl;
		cout << endl;
	}
};
int main()
{
	MyTemplate<int,int>mt1(10,20);
	MyTemplate<int,int>mt2(10,'b');
	mt1.display();
	mt2.display();
	return 1;
}
