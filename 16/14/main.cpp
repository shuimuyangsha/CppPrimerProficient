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
	
	cout << "请输入用户名" << endl;
	cin >> name;
	cout << "请输入密码" << endl;
	cin >> password;
	cout << "登录成功,登录记录已写入日志" << endl;
	fstream file;
	file.open("test.dat",ios::binary|ios::out);
	time_t tCurrentTime;

	tCurrentTime = time ( ( time_t* ) NULL );
	strftime ( timebuf, sizeof ( timebuf ), "%H:%M:%S %y-%m-%d  ", localtime ( &tCurrentTime ) );

	file.write(timebuf,256);file.write(name,128);
	file.write(name,128);
	strcpy(body,"登录.");
	file.write(body,50);
	file.close();

}


