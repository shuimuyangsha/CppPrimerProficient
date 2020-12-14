#include <iostream>
using namespace std;
void main()
{
	int score[101]={0};
	int juni[102]={0};
	int count =0,i;
	do{
		cout << "Input score: " ;
			cin >> score[count++];
	}while(score[count-1]!=-1);
	count--;
	for(i=0;i<count;i++)
		juni[score[i]]++;
	juni[101]=1;
	for(i=100;i>=0;i--)
		juni[i]=juni[i]+juni[i+1];
	cout << "Result: " <<endl;
	for(i=0;i<count;i++)
	{
		cout << score[i] << "is";
		cout << juni[score[i]+1] << endl;
	}
}
