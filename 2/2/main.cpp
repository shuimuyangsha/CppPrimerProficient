#include<iostream>
using namespace std;
void main()
{
  char ch1,ch2;
  ch1='a'; ch2='B';							/*给ch1、ch2赋值*/
  printf("ch1=%c,ch2=%c\n",ch1-32,ch2+32);		/*用字符形式输出一个大于256的数值*/
  printf("ch1+10=%d\n", ch1+10);
  printf("ch1+10=%c\n", ch1+10);
  printf("ch2+10=%d\n", ch2+10);
  printf("ch2+10=%c\n", ch2+10);
}
