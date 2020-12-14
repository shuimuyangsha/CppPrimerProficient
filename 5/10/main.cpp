#include <iostream>
#include <iomanip>
using namespace std;
void main(void)
{
	int i,j;
	i=1;
	j=1;
	for(i=1;i<10;i++)
	{
		for(j=1;j<i+1;j++)
			cout  << setw(2) << i << "*" << j << "=" << setw(2) << i*j ;
		cout << endl;
	}
}
