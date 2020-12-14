#include<iostream>
#include <string>
using namespace std;

#include<string>
void main()
{
	char str1[30],str2[20];
	int i=0;
	cout<<"please input string1:"<< endl;
	gets(str1);
	cout<<"please input string2:"<<endl;
	gets(str2);
	i=strcmp(str1,str2);
	if(i>0)
	cout <<"str1>str2"<<endl;
	else
	if(i<0)
	cout <<"str1<str2"<<endl;
	else
	cout <<"str1=str2"<<endl;
}

