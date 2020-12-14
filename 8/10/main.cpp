#include<iostream>
using namespace std;
union myUnion
{
	int iData;
	char chData;
	float fData;
}uStruct;
int main()
{
	uStruct.chData='A';
	uStruct.fData=0.3;
	uStruct.iData=100;
	cout << uStruct.chData << endl;
	cout << uStruct.fData << endl;
	cout << uStruct.iData << endl;		//正确显示
	uStruct.iData=100;
	uStruct.fData=0.3;
	uStruct.chData='A';
	cout << uStruct.chData << endl;	//正确显示
	cout << uStruct.fData << endl;
	cout << uStruct.iData << endl;
	uStruct.iData=100;
	uStruct.chData='A';
	uStruct.fData=0.3;
	cout << uStruct.chData << endl;
	cout << uStruct.fData << endl;		//正确显示
	cout << uStruct.iData << endl;
	return 0;
}
