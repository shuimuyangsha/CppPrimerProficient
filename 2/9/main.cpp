#include <iostream>
void main()
{
	printf("%4d\n",1);//用空格做占位符
	printf("%04d\n",1);//用0来做占位符
	int a=10,b=20;
	printf("%d%d\n",a,b);//相当于字符连接
}
