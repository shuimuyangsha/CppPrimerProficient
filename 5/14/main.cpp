#include <iostream.h>
#include <iomanip.h>

int main()
{
	char cTmp;
	int iASCII;
	for(int i=1;i<=26;i++)
	{
		cTmp='A'+i-1;
		cout << setw(5) << cTmp;
		cout << ":";
		iASCII=cTmp;
		cout.setf(ios::uppercase);
		cout << hex << iASCII;
		if(i%4==0)
			cout << endl;
	}
	cout << endl;
	return 1;
}
