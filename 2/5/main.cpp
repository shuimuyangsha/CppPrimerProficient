#include <iostream>
#include <iomanip>
using namespace std;
void main()
{
   char str[10]; 						//����һ���ַ�����
   cout<<"��������9���ַ�"<<'\n';			//����ı�
   cout<<"str=";
   cin >>str;							//��¼�������������
   cout<<"ֱ������ַ���"<<'\n';
   cout<<str<<'\n';
   cout<<"ͨ������Ԫ������ַ���"<<'\n';
   for(int i=0;i<10;i++)					//�����ַ�����
   {
      cout<<str[i];
   }
}
