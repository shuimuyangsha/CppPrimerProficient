#include <string>
using  std::string;
enum Edog{PeiKingese,demi_wolf,Huangdan};  	//英文名字枚举
enum Cdog{JingBa,LangGou,HuangDan};   		//拼音名字枚举,HuangDan的定义避免了命名冲突
namespace pet
{
	//typedef string kind;  					//换为枚举类型
	typedef string petname;
	typedef string voice;
	typedef class dog
	{
		private:
			Cdog m_kindName;  				//拼音宠物狗枚举种类
		protected: 							//假如有别需要子类继承，则不需要使用种类这个属性。
			petname m_dogName;
			int m_age;
			voice m_voice;
			void setVoice(Cdog name);  		//从传递string类型变成传递整型数据
			void setDefaultName(Cdog name);  //设置默认名字
		public:
			dog(Cdog name);     				//从传递string类型变成传递整型数据
			void sound();
			void setName(petname name);
			string getName();
	}Dog,DOG;  								//声明了别名
}
