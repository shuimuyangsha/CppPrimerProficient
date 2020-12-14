#include "Person.h"
#include <stdlib.h>
#include <string.h>

short CPerson::getAge() 
{ 
	return m_shAge; 
}
int CPerson::setAge(short sAge)
{
	m_shAge=sAge;
	return 0;								//执行成功返回0
}
int CPerson::getIndex() 
{ 
	return m_iIndex; 
}
int CPerson::setIndex(int iIndex)
{
	m_iIndex=iIndex;
	return 0;//执行成功返回0
}
char* CPerson::getName() 
{ 
	return m_cName; 
}
int CPerson::setName(char cName[25])
{
	strcpy(m_cName,cName);
	return 0;//执行成功返回0
}
double CPerson::getSalary() 
{ 
	return m_dSalary; 
}
int CPerson::setSalary(double dSalary)
{
	m_dSalary=dSalary;
	return 0;//执行成功返回0
}
