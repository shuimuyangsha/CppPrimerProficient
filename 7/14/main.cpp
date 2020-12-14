#include <iostream>
using namespace std;
int main()
{
	int *pI = NULL;
	int i = 4;
	pI = &i;
	float f = 3.333f; 
	bool b =true;
	void *pV = NULL;
	cout<<"依次赋值给空指针"<<endl;
	pV = pI;
	cout<<"pV = pI --------"<<*(int*)pV<<endl;
	cout<<"pV = pI ---------转为float类型指针"<<*(float*)pV<<endl;
	pV = &f;
	cout<<"pV = &f --------"<<*(float*)pV<<endl;
	cout<<"pV = &f --------转为int类型指针"<<*(int*)pV<<endl;
	return 0;
}
