#include <iostream>
using std::cout;
using std::endl;
using std::cin;
swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
void main()
{
	int x,y;
	int *p_x,*p_y;
	cout << " input two number " << endl;
	cin >> x;
	cin >> y;
	p_x=&x;p_y=&y;
	if(x<y)
		swap(p_x,p_y);
	cout << "x=" << x <<endl;
	cout << "y=" << y <<endl;
}
