#include <iostream>
using namespace std;
class CBicycle
{
public:
	CBicycle()
	{
		cout << "Bicycle Construct" << endl;
	}
	CBicycle(int iWeight)
	{
		m_iWeight=iWeight;
	}
	void Run()
	{
		cout << "Bicycle Run" << endl;
	}

protected:
	int m_iWeight;
};

class CAirplane
{
public:
	CAirplane()
	{
		cout << "Airplane Construct " << endl;
	};
	CAirplane(int iWeight)
	{
		m_iWeight=iWeight;
	}
	void Fly()
	{
		cout << "Airplane Fly " << endl;
	}

protected:
	int m_iWeight;
};

class CAirBicycle : public CBicycle, public CAirplane
{
public:
	CAirBicycle()
	{
		cout << "CAirBicycle Construct" << endl;
	}
	void RunFly()
	{
		cout << "Run and Fly" << endl;
	}
};
void main()
{
	CAirBicycle ab;
	ab.RunFly();
}
