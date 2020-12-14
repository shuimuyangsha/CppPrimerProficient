#include <iostream>
using namespace std;
class CAnimal								//定义一个动物类
{
public:
CAnimal()								//定义构造函数
{
	cout << "动物类被构造"<< endl;				//输出信息
}
	void Move()							//定义成员函数
	{
		cout << "动物能够移动"<< endl;				//输出信息
	}
};
class CBird : virtual public CAnimal			//从CAnimal类虚继承CBird类
{
public:
	CBird()								//定义构造函数
{
	cout << "鸟类被构造"<< endl;				//输出信息
}
void FlyInSky()							//定义成员函数
	{
		cout << "鸟能够在天空飞翔"<< endl;			//输出信息
	}
	void Breath()							//定义成员函数
	{
		cout << "鸟能够呼吸"<< endl;				//输出信息
	}
};
class CFish: virtual public CAnimal			//从CAnimal类虚继承CFish
{
public:
	CFish()								//定义构造函数
	{
		cout << "鱼类被构造"<< endl;				//输出信息
	}
	void SwimInWater()						//定义成员函数
	{
		cout << "鱼能够在水里游"<< endl;			//输出信息
	}
	void Breath()							//定义成员函数
	{
		cout << "鱼能够呼吸"<< endl;				//输出信息
	}
};
class CWaterBird: public CBird, public CFish		//从CBird和CFish类派生子类CWaterBird
{
public:
	CWaterBird()							//定义构造函数
	{
		cout << "水鸟类被构造"<< endl;				//输出信息
	}
void Action()							//定义成员函数
	{
		cout << "水鸟即能飞又能游"<< endl;			//输出信息
	}
};
int main(int argc, char* argv[])						//主函数
{
	CWaterBird waterbird;						//定义水鸟对象
	return 0;
}
