#include <iostream>
using namespace std;
void main()
{
	char str1[50],str2[30],*p1,*p2;
	p1=str1;
	p2=str2;
	cout << "please input string1:"<< endl;
	gets(str1);
	cout << "please input string2:"<< endl;
	gets(str2);
	strcat(str1,str2);	//Á¬½Óstr1ºÍstr2
	cout << "the new string is:"<< endl;
	puts(str1);
}
