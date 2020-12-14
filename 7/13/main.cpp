#include <iostream>
using namespace std;
void main()
{
	int a=100;
	int *p=&a;
	printf("address:%d\n",p);
	p++;
	printf("address:%d\n",p);
	p--;
	printf("address:%d\n",p);
	p--;
	printf("address:%d\n",p);
}
