#include <iostream>
using namespace std;
void main()
{
	int array1[3][4]={{1,2,3,4},					//����3��4���������鲢��ʼ��
	{5,6,7,8},
	{9,10,11,12}};
	int array2[12]={0};
	int row,col,i;
	cout << "array old" <<endl;
	for(row=0;row<3;row++)						//����array1
	{
		for(col=0;col<4;col++)
		{
			cout << array1[row][col];
		}
		cout << endl;
	}
	cout << "array new" << endl;
	for(row=0;row<3;row++)						//�����кϲ���һ��
	{
		for(col=0;col<4;col++)
		{
			i=col+row*4;
			array2[i]=array1[row][col];
		}
	}
	for(i=0;i<12;i++)							//����ϲ�֮�������
		cout << array2[i] << endl;
}
