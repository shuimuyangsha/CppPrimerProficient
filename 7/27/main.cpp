#include <iostream>
using namespace std;
void sort(char *name[],int n)				  //对字符串进行排序
{ 
	char *temp;
	int i,j,k;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
		if(strcmp(name[k],name[j])>0) k=j;
		if(k!=i)
		{ 
			temp=name[i];name[i]=name[k];name[k]=temp;
		}
	}
}
void print(char *name[],int n)				  //输出字符串数组中的元素
{ 
	int i=0;
	char *p;
	p=name[0];
	while(i<n)  
	{
		p=*(name+i++);
		cout<<p<<endl;
	}
}
int main( )
{ 
	char *name[]={"mingri","soft","C++","mr"};	  //定义指针数组
	int n=4;
	sort(name,n);
	print(name,n);
	return 0;
}
