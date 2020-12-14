#include <iostream.h>
#include <strstrea.h>
void main()
{
	char buf[]="12345678";
	int i,j;
	istrstream s1(buf);
	s1 >> i;//将字符串转换为数字
	istrstream s2(buf,3);
	s2 >> j; //将字符串转换为数字
	cout << i+j <<endl;//两个数字相加
}
