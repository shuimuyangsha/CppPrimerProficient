#include <string>
using  std::string;
enum Edog{PeiKingese,demi_wolf,Huangdan};  	//Ӣ������ö��
enum Cdog{JingBa,LangGou,HuangDan};   		//ƴ������ö��,HuangDan�Ķ��������������ͻ
namespace pet
{
	//typedef string kind;  					//��Ϊö������
	typedef string petname;
	typedef string voice;
	typedef class dog
	{
		private:
			Cdog m_kindName;  				//ƴ�����ﹷö������
		protected: 							//�����б���Ҫ����̳У�����Ҫʹ������������ԡ�
			petname m_dogName;
			int m_age;
			voice m_voice;
			void setVoice(Cdog name);  		//�Ӵ���string���ͱ�ɴ�����������
			void setDefaultName(Cdog name);  //����Ĭ������
		public:
			dog(Cdog name);     				//�Ӵ���string���ͱ�ɴ�����������
			void sound();
			void setName(petname name);
			string getName();
	}Dog,DOG;  								//�����˱���
}
