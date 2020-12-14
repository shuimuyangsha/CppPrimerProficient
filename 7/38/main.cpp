#include<iostream>
using namespace std;
#define N 4
void mix(int (*a)[N],int m)								//进行比较和交换的函数
{
	int value,i,j;
	for(i=0;i<m;i++)
	{
		value=*(*(a+i));
		for(j=0;j<N;j++)
		if(*(*(a+i)+j)<value)
		value=*(*(a+i)+j);
		cout <<"line " << i ;
		cout <<":the mix number is " << value << endl;		//输出最小值
	}
}
void main()
{
	int a[3][N],i,j;
	int (*p)[N];
	p=&a[0];
	cout << "please input:" << endl;
	for(i=0;i<3;i++)
	for(j=0;j<N;j++)
	cin >> a[i][j];
	mix(p,3);
}
