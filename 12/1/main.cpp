#include <iostream>
using namespace std;
template <class type,int len>			//定义一个模板类型
type Max(type array[len])				//定义函数模板
{
	type ret = array[0];				//定义一个变量
	for(int i=1; i<len; i++)				//遍历数组元素
	{
		ret = (ret > array[i])? ret : array[i];	//比较数组元素大小
	}
	return ret;							//返回最大值
}
void main()
{
	int array[5] = {1,2,3,4,5};					//定义一个整型数组
	int iret = Max<int,5>(array);				//调用函数模板Max
	double dset[3] = {10.5,11.2,9.8};			//定义实数数组
	double dret = Max<double,3>(dset);		//调用函数模板Max
	cout << dret << endl;
}
