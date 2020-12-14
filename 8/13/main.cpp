#include <iostream>
using namespace std;
void main()
{
	enum  weekday{Sunday=2,Monday=3,Tuesday=4,Wednesday=5,Thursday=0,Friday=1,Saturday=6};

	weekday m_eType1;
	weekday m_eType2;
	m_eType1=Sunday;//Sunday=2
	m_eType2=Friday;//Friday=1
	cout << m_eType1-m_eType2 << endl;
}
