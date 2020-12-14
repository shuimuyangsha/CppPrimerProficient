#include <iostream>
using namespace std;
enum Weekday {Sunday,Monday,Tuesday,Wednesday,Thursday,Friday,Saturday};
void main()
{
	Weekday day1,day2;
	day1=Monday;
	day2=Saturday;
	int n;
	n=day1;
	n=day2+1;
	if(n>day1)			//可以比较
		cout << "n>day1" <<endl;
	if(day1<day2)
		cout << "day1<day2" <<endl;
}
