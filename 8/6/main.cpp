#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;
using std::string;
class human
{
	private:
	int m_nSpeed;
	string m_Name;
public: 
	human(string name)
	{
		m_Name = name;
	}
	void sayHello()
	{
		cout<<"���!����"<<m_Name<<endl;
	}
};
int main()
{
	auto h1 = human("Mike");
	decltype(h1) h2 = human("����");
	h1.sayHello();
	h2.sayHello();
}
