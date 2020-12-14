#include <iostream>
using std::cin;
using std::cout;
using std::endl;
int plus(int b)
{
	return b+1;
}
int main()
{
	void* pV = NULL;					//定义一个空类型指针
	int result = 0;
	pV = plus;							//让指针指向函数plus
	cout<<"执行pV指向的函数:"<<endl;
  	result=((int(*)(int))pV)(10);	//将空类型指针pV强制转换返回值整型、参数整型的函数指针
	cout<<"result:"<<result<<endl;
	return 0;
}
