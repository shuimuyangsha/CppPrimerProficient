#include <iostream>
using namespace std;
class CExcept
{
public:
	virtual char *GetError(){ return "���ദ����"; }
};
class CDerive : public CExcept
{
public:
	char *GetError(){ return "�����ദ����"; }
};
int main(int argc, char* argv[])
{
		try									//�׳��쳣
		{
			throw CDerive();
		}
		catch(CExcept)						//�����쳣
		{
		cout << "������ദ����\n";
		}
		catch(CDerive)						//�����쳣
		{
			cout << "���������ദ����\n";
		}
		return 0;
}
