class CPerson
{
public:
	//数据成员
	int m_iIndex;
	char m_cName[25];
	short m_shAge;
	double m_dSalary;
	//成员函数
	short getAge();
	int setAge(short sAge);
	int getIndex() ;
	int setIndex(int iIndex);
	char* getName() ;
	int setName(char cName[25]);
	double getSalary() ;
	int setSalary(double dSalary);
};
