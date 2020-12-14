#include <iostream>
#include <string>
using namespace std;
class CCustomError							//异常类
{
private:
	int m_ErrorID;							//异常ID
	char m_Error[255];						//异常信息
public:
	CCustomError()							//构造函数
	{
		m_ErrorID = 1;
		strcpy(m_Error,"出现异常！");
	}
	int GetErrorID(){ return m_ErrorID; }		//获取异常ID
	char * GetError(){ return m_Error; }		//获取异常信息
};
int main(int argc, char* argv[])
{
	try
	{
		throw "字符串异常！";
		//throw (new CCustomError());		//抛出异常
	}
	catch(CCustomError* error)
	{
		//输出异常信息
		cout << "异常ID：" << error->GetErrorID() << endl;
		cout << "异常信息：" << error->GetError() << endl;
	}
	catch(char * error)
	{
		cout << "异常信息：" << error << endl;
	}
	return 0;
}