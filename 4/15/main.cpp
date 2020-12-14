#include<iostream>
using namespace std;
int main()
{
	int tmp[4];
	int a=0,b=0,c=0;
	cin >>a >> b >> c;
	tmp[0]=a;
	tmp[1]=b;
	tmp[2]=c;
	tmp[3]=-1;
	for(int i=1;i<3;i++)
	{
		for(int j=2;j>=i;j--)
		{
			if(tmp[j]<tmp[j-1])
			{
				tmp[3]=tmp[j-1];
				tmp[j-1]=tmp[j];
				tmp[j]=tmp[3];
			}
		}
	}

	for(int k=0;k<3;k++)
		cout << tmp[k] << endl;

}
