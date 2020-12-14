#include <iostream>
using namespace std;
void main()
{
	int array1[3][4]={{1,2,3,4},					//定义3行4列整型数组并初始化
	{5,6,7,8},
	{9,10,11,12}};
	int array2[12]={0};
	int row,col,i;
	cout << "array old" <<endl;
	for(row=0;row<3;row++)						//遍历array1
	{
		for(col=0;col<4;col++)
		{
			cout << array1[row][col];
		}
		cout << endl;
	}
	cout << "array new" << endl;
	for(row=0;row<3;row++)						//将三行合并成一行
	{
		for(col=0;col<4;col++)
		{
			i=col+row*4;
			array2[i]=array1[row][col];
		}
	}
	for(i=0;i<12;i++)							//输出合并之后的数组
		cout << array2[i] << endl;
}
