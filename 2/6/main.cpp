#include <iostream.h>
#include <iomanip.h>
void main()
{
	int i=0x2F,j=255;
	cout << i << endl;
	cout << hex << i << endl;
	cout << hex << j << endl;
	cout << hex << setiosflags(ios::uppercase) << j << endl;
}
