#include<iostream>
using namespace std;

namespace Output							//定义命名空间
{
	void Show()							//定义函数
	{
		cout<<"Output's function!"<<endl;
	}
	namespace MyName					//定义嵌套命名空间
	{
		void Demo()						//定义函数
		{
			cout<<"MyName's function!"<<endl;
		}
	}
}

int main()
{
	Output::Show();						//调用Output命名空间中的函数
	Output::MyName::Demo();				//调用MyName命名空间中的函数
	return 0;
}
