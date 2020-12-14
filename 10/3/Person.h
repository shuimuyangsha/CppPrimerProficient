class CPerson
{
	public:
	CPerson(int iIndex,short shAge,double dSalary);//构造函数
	CPerson(CPerson & copyPerson);//复制构造函数
	int m_iIndex;
	short m_shAge;
	double m_dSalary;
	int getIndex();
	short getAge();
	double getSalary() ;
};
//构造函数
CPerson::CPerson(int iIndex,short shAge,double dSalary)
{
	m_iIndex=iIndex;
	m_shAge=shAge;
	m_dSalary=dSalary;
}
//复制构造函数
CPerson::CPerson(CPerson & copyPerson)
{
	m_iIndex=copyPerson.m_iIndex;
	m_shAge=copyPerson.m_shAge;
	m_dSalary=copyPerson.m_dSalary;
}
short CPerson::getAge() 
{ 
	return m_shAge; 
}
int CPerson::getIndex() 
{ 
	return m_iIndex; 
}
double CPerson::getSalary() 
{ 
	return m_dSalary; 
}
