#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
   char str[10]; 						//定义一个字符数组
   cout<<"输入少于9个字符"<<'\n';			//输出文本
   cout<<"str=";
   cin >>str;							//记录用于输入的数据
   cout<<"直接输出字符串"<<'\n';
   cout<<str<<'\n';
   cout<<"通过数组元素输出字符串"<<'\n';
   for(int i=0;i<10;i++)					//遍历字符数组
   {
      cout<<str[i];
   }
}
