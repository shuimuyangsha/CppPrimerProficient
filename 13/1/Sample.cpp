#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void Output(char val)
{
	cout << val << ' ';
}
int main()
{
	vector<char> charVector;	//�����ַ�������
	charVector.push_back('Z');	//�������в�������
	charVector.push_back('D');
	charVector.push_back('S');
	charVector.push_back('A');
	charVector.push_back('E');
	charVector.push_back('C');
	charVector.push_back('U');
	charVector.push_back('V');
	cout << "Contents of vector:";
	for_each(charVector.begin(),charVector.end(),Output);	//ѭ������ʾ�����е�Ԫ��
	sort(charVector.begin(),charVector.end());	//�������е�Ԫ�ؽ�������
	cout << std::endl<< "Contents of vector:";
	for_each(charVector.begin(),charVector.end(),Output);	//ѭ������ʾ�����е�Ԫ��
	cout << endl;
	return 0;
}
