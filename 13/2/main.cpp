#include <iostream>
#include <deque>
using namespace std;
int main()
{
	deque<int > intdeque;
	intdeque.push_back(2);
	intdeque.push_back(3);
	intdeque.push_back(4);
	intdeque.push_back(7);
	intdeque.push_back(9);
	cout << "Deque: old" <<endl;
	for(int i=0;i< intdeque.size();i++)
	{
		cout << "intdeque[" << i << "]:";
		cout << intdeque[i] << endl;
	}
	cout << endl;
	intdeque.pop_front();//¨¦?3y¨°"???a??
	intdeque.pop_front();
	intdeque[1]=33;
	cout << "Deque: new" <<endl;
	for(i=0;i<intdeque.size();i++)
	{
		cout << "intdeque[" << i << "]:";
		cout << intdeque[i] << " ";
	}
	cout << endl;
	return 0;
}
