#include <iostream >
#include <time.h>
#include <fstream>
using namespace std;
void main ()
{
	char name[128];
	char password[128];
	char timebuf[256];
	char body[50];
	
	cout << "�������û���" << endl;
	cin >> name;
	cout << "����������" << endl;
	cin >> password;
	cout << "��¼�ɹ�,��¼��¼��д����־" << endl;
	fstream file;
	file.open("test.dat",ios::binary|ios::out);
	time_t tCurrentTime;

	tCurrentTime = time ( ( time_t* ) NULL );
	strftime ( timebuf, sizeof ( timebuf ), "%H:%M:%S %y-%m-%d  ", localtime ( &tCurrentTime ) );

	file.write(timebuf,256);file.write(name,128);
	file.write(name,128);
	strcpy(body,"��¼.");
	file.write(body,50);
	file.close();

}


