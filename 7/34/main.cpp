#include <iostream>
int get()
{
	int i = 4;
	return i;
}
int main()
{
	int &&k = get()+4;
	// int &i = get()+4;  //����
	k++;
	std::cout<<"k��ֵ"<<k<<std::endl;
	return 0;
}
