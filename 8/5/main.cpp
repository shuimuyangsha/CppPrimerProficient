#include <iostream>
#include "pet.h"
using std::cout;
using std::endl;
using pet::dog;  //ʹ��pet�ռ�ĳ���Ȯdog��
using pet::DOG;
int main()
{
		cout<<"��������2ֻС����"<<endl;
		dog myDog1 = dog(JingBa);  //���ƿռ���౻���������󣬿���ֱ��ʹ��
		pet::Dog myDog2= pet::Dog(LangGou);  //��������Ҫʹ�����ֿռ�
		myDog2.setName("С��");
		cout<<"С���Ƿ���������"<<endl;
		myDog1.sound();
		myDog2.sound();
		cout<<"һ�������������4ֻС��"<<endl;
		// dog dog1 = dog(PeiKingese); //��������ת�����⣬��Ȼ����ֵ��ͬ�����޷���ʽת��
		dog dog1 = dog((Cdog)PeiKingese); 
		dog dog2 = dog((Cdog)demi_wolf);
		dog dog3 = dog((Cdog)HuangDan);   //�й��˺�����˶��ѻƵ�Ȯ��Ϊ"huangdan"
		dog dog4 = dog((Cdog)43);  //43���Գ���ö�ٵķ�Χ�����ǹ۲���ִ�н��
		cout<<"3ֻС������Ӣ������"<<endl;
		dog1.setName("LuckyBoy");
		dog2.setName("Andy");
		dog3.setName("BigBow");
		cout<<"С���Ƿ���������"<<endl;
		dog1.sound();
		cout<<"��ԭ��"<<dog1.getName()<<"��һֻ����"<<endl;
		dog2.sound();
		cout<<"Ŷ��ԭ��"<<dog2.getName()<<"��һֻ�ǹ�"<<endl;
		dog3.sound();
		cout<<"����ԭ��"<<dog3.getName()<<"��һֻ�Ƶ�"<<endl;
		dog4.sound();
		cout<<"��?��������ʲô��?"<<endl;
		return 0;
}
