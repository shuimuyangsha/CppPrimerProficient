#include<iostream>
using namespace std;
void main()
{
	int i,j;
	int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	cout << "the array is: " << endl;
	for(i=0;i<4;i++)						//4行
	{
		for(j=0;j<3;j++)					//3列
			cout <<*(*(a+i)+j) << endl; 	//输出第i行的第j个元素
	}
}
