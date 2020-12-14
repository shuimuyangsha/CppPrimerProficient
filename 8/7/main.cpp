#include <iostream>
using namespace std;
struct PersonInfo							//定义结构体
{
	int index;
	char name[30];
	short age;
};
void ShowStuctMessage(struct PersonInfo MyInfo)	//自定义函数，输出结构体变量成员
{
	cout << MyInfo.index << endl;
	cout << MyInfo.name << endl;
	cout << MyInfo.age<< endl;

}
void main()
{
	
	PersonInfo pInfo;						//声明结构体
	pInfo.index=1;
	strcpy(pInfo.name,"张三");
	pInfo.age=20;
	ShowStuctMessage(pInfo);				//调用自定义函数
}
