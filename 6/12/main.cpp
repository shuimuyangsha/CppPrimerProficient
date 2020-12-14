#include<iostream>
using namespace std;
int Max(int ,int );
int main()
{
	int i,j;
	cin >> i >> j;
	cout << Max(i,j) <<endl;
	return 1;
}

int Max(int a,int b)
{
	return a>b ? a : b ;
}