#include <list>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{	
		int array[3]={1,2,3};
		list<int> list1(array,array+3);
     transform(list1.begin(),list1.end(),list1.begin(),[](int x){return x*x*x;});
		for_each(list1.begin(),list1.end(),[](int x){cout<<x<<endl;});
		return 0;
}
