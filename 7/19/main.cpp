#include<iostream>
using namespace std;
void main()
{
	int i,j;
	int a[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	cout << "the array is: " << endl;
	for(i=0;i<4;i++)						//4��
	{
		for(j=0;j<3;j++)					//3��
			cout <<*(*(a+i)+j) << endl; 	//�����i�еĵ�j��Ԫ��
	}
}
