#include "pet.h"
#include <iostream>
using std::cout;
using std::endl;
using namespace pet;
void dog::setVoice(Cdog name)
{
	switch(name){
	case JingBa:
		m_voice = "‡ª‡ª";
		break;
	case LangGou:
		m_voice = "Œÿ‡ª";
		break;
	case HuangDan:
		m_voice = "‡∏‡ª";
		break;
	 default:
		m_voice = "-----";
	}
}
 void dog::setDefaultName(Cdog name)
	{
		switch(name){
		case JingBa:
			m_dogName = "æ©∞Õ";
			break;
		case LangGou:
			m_dogName = "¿«π∑";
			break;
		case HuangDan:
			m_dogName = "ª∆µ§";
			break;
		 default:
			m_dogName = "√‘÷Æ»Æ";
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
		cout<<m_dogName<<"∑¢≥ˆ"<<m_voice<<"µƒΩ–…˘"<<endl;
	}
	void dog::setName(petname name)
	{
		m_dogName = name;
	}
	string dog::getName()
	{
		return m_dogName;
	}
