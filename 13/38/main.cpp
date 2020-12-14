#include <iostream>
#include <list>
#include <algorithm>
#include <functional> 	//提供了包装lambda的函数模板
using namespace std;
int main()
{
	function<int(int)>hcf = [&](int x)->int {;return x*x*x;};
	int p = 5;
	int a = hcf(p);
		//hcf变成了犹如int(x){k2=123;return k1=x*x*x}这样一个临时函数，很方便的调用main块中
		//的变量。在其他的情况下，例如成员函数，全局函数中都可很便利的应用。
		cout << "输出p的三次方  " << a << endl;
	return 0;
}
