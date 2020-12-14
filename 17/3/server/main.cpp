#include <iostream.h>
#include <stdlib.h>
#include "winsock2.h"
#pragma comment (lib,"ws2_32.lib")
void main()
{
	WSADATA wsd;	//定义WSADATA对象
	WSAStartup(MAKEWORD(2,2),&wsd);
	SOCKET  	m_SockServer;
	sockaddr_in serveraddr;
	sockaddr_in serveraddrfrom;
	SOCKET m_Server;
	serveraddr.sin_family = AF_INET;	//设置服务器地址家族
	serveraddr.sin_port = htons(4600);	//设置服务器端口号
	serveraddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	m_SockServer = socket ( AF_INET,SOCK_STREAM,  0);
	int i=bind(m_SockServer,(sockaddr*)&serveraddr,sizeof(serveraddr));
	cout << "bind:" << i << endl;
	int iLisRet;
	char buf[]="Welcome to mingrikeyi\0";//向客户端发送的内容
	int len=sizeof(sockaddr);
	iLisRet=listen(m_SockServer,0);//进行监听
	cout << "开始监听" << endl;
	m_Server=accept(m_SockServer,(sockaddr*)&serveraddrfrom,&len);//同意建立连接
	if(m_Server!=INVALID_SOCKET)
	{
		send(m_Server,buf,sizeof(buf),0); //发送字符过去
		cout << "连接已建立" << endl;
	}
	WSACleanup();
	return;
}