#include <iostream>
#include <string>
using namespace std;
namespace pet
{
	typedef string kind;
	typedef string petname;
	typedef string voice;
	typedef class dog
	{
		private:
			kind m_kindName;  				//宠物狗种类
		protected: 							//假如有别需要子类继承，则不需要使用种类这个属性。
			petname m_dogName;
			int m_age;
			voice m_voice;
			void setVoice(kind name);
		public:
		dog(kind name);
		void sound();
		void setName(petname name);
	}Dog,DOG;  								//声明了别名，用Dog,DOG代替类dog
	void dog::setVoice(kind name)
	{
		if(name == "北京犬")
		{
			m_voice = "嗷嗷";
		}
		else if(name == "狼犬")
		{
			m_voice = "呜嗷";
		}
		else if(name == "黄丹犬")
		{
			m_voice = "喔嗷";
		}
	}
	dog::dog(kind name)
	{
		m_kindName = name;
		m_dogName = name;
		setVoice(name);
	}
	void dog::sound()
	{
		cout<<m_dogName<<"发出"<<m_voice<<"的叫声"<<endl;
	}
	void dog::setName(petname name)
	{
		m_dogName = name;
	}
}
using pet::dog;  							//使用pet空间的宠物犬dog类
using pet::DOG;
int main()
{
	dog a = dog("北京犬");  					//名称空间的类被包含进来后，可以直接使用
	pet::Dog b = pet::Dog("狼犬");  			//别名仍需要使用名字空间
	pet::DOG c = pet::DOG("黄丹犬");
	a.setName("小白");
	c.setName("阿黄");
	a.sound();
	b.sound();
	c.sound();
	return 0;
}