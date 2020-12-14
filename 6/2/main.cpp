#include <iostream>
using namespace std;
void OutputInfo(const char* pchData = "One world,one dream!")
{
	cout << pchData << endl;	//输出信息
}
void main()
{
	OutputInfo();							//利用默认值作为函数实际参数
	OutputInfo("Beijing 2008 Olympic Games!");	//直接传递实际参数
}
