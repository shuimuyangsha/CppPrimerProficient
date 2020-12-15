#include <iostream>
#include <stdlib.h>
#include "winsock2.h"
#pragma comment (lib,"ws2_32.lib")

using namespace std;

DWORD WINAPI threadpro(LPVOID pParam)
{
	int num;
	char buffer[1024];
	//SOCKET m_SockFrom=(SOCKET)pParam;
	SOCKET m_SockFrom;
	m_SockFrom = socket ( AF_INET,SOCK_DGRAM, 0);
	if(m_SockFrom!=INVALID_SOCKET)
			cout << "start Receive:" << endl;
	sockaddr_in bindaddr;
	bindaddr.sin_family = AF_INET;	//设置服务器地址家族
	bindaddr.sin_port = htons(4600);	//设置服务器端口号
	bindaddr.sin_addr.S_un.S_addr = INADDR_ANY;//INADDR_ANY;
	
	int i=bind(m_SockFrom,(sockaddr*)&bindaddr,sizeof(bindaddr));
	cout << i<< endl;

	sockaddr addrFrom;
	int len=sizeof(addrFrom);

	while(1)
	{
		memset(buffer,0,1024);
		num=recvfrom(m_SockFrom,buffer,1024,NULL,&addrFrom,&len);
		if(num>=0)
			cout << "From：" << buffer << endl;//接收信息			
	}
}
int main()
{
	WSADATA wsd;	//定义WSADATA对象
	WSAStartup(MAKEWORD(2,2),&wsd);
	SOCKET  	m_SockTo;
	char ipBuf[1024];
	cout << "请输入IP：";
		cin >> ipBuf;
	m_SockTo = socket ( AF_INET,SOCK_DGRAM, 0);
	
	HANDLE m_Handle;
	DWORD nThreadId = 0;
	char buffer[1024];
	BOOL optval=TRUE;
	sockaddr_in addrTo;
	addrTo.sin_family = AF_INET;	//设置服务器地址家族
	addrTo.sin_port = htons(4601);	//设置服务器端口号
	addrTo.sin_addr.S_un.S_addr = inet_addr(ipBuf);//inet_addr("127.0.0.1");

	m_Handle = (HANDLE)::CreateThread(NULL,0,threadpro,(LPVOID)m_SockTo,0,&nThreadId );
	while(1)
	{
		cout << "To:";
		cin >> buffer;
		int ii=sendto(m_SockTo,buffer,1024,0,(sockaddr*)&addrTo,sizeof(addrTo));
		cout << ii << endl;
	}
	return 0;
}