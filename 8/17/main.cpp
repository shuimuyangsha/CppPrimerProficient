#include <iostream>
using namespace std;
class CExcept
{
public:
	virtual char *GetError(){ return "基类处理器"; }
};
class CDerive : public CExcept
{
public:
	char *GetError(){ return "派生类处理器"; }
};
int main(int argc, char* argv[])
{
		try									//抛出异常
		{
			throw CDerive();
		}
		catch(CExcept)						//捕获异常
		{
		cout << "进入基类处理器\n";
		}
		catch(CDerive)						//捕获异常
		{
			cout << "进入派生类处理器\n";
		}
		return 0;
}
