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
	vector<char> charVector;	//创建字符型向量
	charVector.push_back('Z');	//在向量中插入数据
	charVector.push_back('D');
	charVector.push_back('S');
	charVector.push_back('A');
	charVector.push_back('E');
	charVector.push_back('C');
	charVector.push_back('U');
	charVector.push_back('V');
	cout << "Contents of vector:";
	for_each(charVector.begin(),charVector.end(),Output);	//循环并显示向量中的元素
	sort(charVector.begin(),charVector.end());	//对向量中的元素进行排序
	cout << std::endl<< "Contents of vector:";
	for_each(charVector.begin(),charVector.end(),Output);	//循环并显示向量中的元素
	cout << endl;
	return 0;
}
