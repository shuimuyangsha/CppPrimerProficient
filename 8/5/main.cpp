#include <iostream>
#include "pet.h"
using std::cout;
using std::endl;
using pet::dog;  //使用pet空间的宠物犬dog类
using pet::DOG;
int main()
{
		cout<<"我领养了2只小狗。"<<endl;
		dog myDog1 = dog(JingBa);  //名称空间的类被包含进来后，可以直接使用
		pet::Dog myDog2= pet::Dog(LangGou);  //别名仍需要使用名字空间
		myDog2.setName("小黑");
		cout<<"小狗们发出叫声："<<endl;
		myDog1.sound();
		myDog2.sound();
		cout<<"一个外国人领养了4只小狗"<<endl;
		// dog dog1 = dog(PeiKingese); //出现类型转化问题，虽然字面值相同，但无法隐式转化
		dog dog1 = dog((Cdog)PeiKingese); 
		dog dog2 = dog((Cdog)demi_wolf);
		dog dog3 = dog((Cdog)HuangDan);   //中国人和外国人都把黄丹犬称为"huangdan"
		dog dog4 = dog((Cdog)43);  //43明显超出枚举的范围，我们观察下执行结果
		cout<<"3只小狗有了英文名字"<<endl;
		dog1.setName("LuckyBoy");
		dog2.setName("Andy");
		dog3.setName("BigBow");
		cout<<"小狗们发出叫声："<<endl;
		dog1.sound();
		cout<<"唔，原来"<<dog1.getName()<<"是一只京巴"<<endl;
		dog2.sound();
		cout<<"哦，原来"<<dog2.getName()<<"是一只狼狗"<<endl;
		dog3.sound();
		cout<<"啊，原来"<<dog3.getName()<<"是一只黄丹"<<endl;
		dog4.sound();
		cout<<"嗯?请问这是什么狗?"<<endl;
		return 0;
}
