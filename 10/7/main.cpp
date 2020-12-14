#include<iostream>

namespace MyName						//定义命名空间
{
	int iValue=10;							//定义整型变量
}

using namespace std;						//使用命名空间std
using namespace MyName;					//使用命名空间MyName

int main()
{
	cout<<iValue<<endl;						//输出命名空间中的变量
	return 0;
}
