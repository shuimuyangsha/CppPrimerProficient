#include "pet.h"
#include <iostream>
using std::cout;
using std::endl;
using namespace pet;
void dog::setVoice(Cdog name)
{
	switch(name){
	case JingBa:
		m_voice = "��";
		break;
	case LangGou:
		m_voice = "���";
		break;
	case HuangDan:
		m_voice = "��";
		break;
	 default:
		m_voice = "-----";
	}
}
 void dog::setDefaultName(Cdog name)
	{
		switch(name){
		case JingBa:
			m_dogName = "����";
			break;
		case LangGou:
			m_dogName = "�ǹ�";
			break;
		case HuangDan:
			m_dogName = "�Ƶ�";
			break;
		 default:
			m_dogName = "��֮Ȯ";
		}
	}
	dog::dog(Cdog name)
	{
		m_kindName = name;
		setDefaultName(name);
		setVoice(name);
	}
	void dog::sound()
	{
		cout<<m_dogName<<"����"<<m_voice<<"�Ľ���"<<endl;
	}
	void dog::setName(petname name)
	{
		m_dogName = name;
	}
	string dog::getName()
	{
		return m_dogName;
	}
