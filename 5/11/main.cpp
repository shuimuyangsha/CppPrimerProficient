#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	int input;
	for(input=100;input<=999;input++)
	{
		a=input / 100;			//���λ
		b=(input % 100) /10;		//��ʮλ
		c=input %10;			//���λ
		if(a*a*a+b*b*b+c*c*c == input)
			cout << input<< endl;
	}
	return 0;
}
