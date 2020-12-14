#include <iostream>
int get()
{
	int i = 4;
	return i;
}
int main()
{
	int &&k = get()+4;
	// int &i = get()+4;  //³ö´í
	k++;
	std::cout<<"kµÄÖµ"<<k<<std::endl;
	return 0;
}
