typedef char * CString;
#include <iostream.h>
void main()
{
	CString str;
	char temp[]="Hello World";
	str=temp;
	cout << str << endl;
}
