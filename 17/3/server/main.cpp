#include <iostream.h>
#include <stdlib.h>
#include "winsock2.h"
#pragma comment (lib,"ws2_32.lib")
void main()
{
	WSADATA wsd;	//����WSADATA����
	WSAStartup(MAKEWORD(2,2),&wsd);
	SOCKET  	m_SockServer;
	sockaddr_in serveraddr;
	sockaddr_in serveraddrfrom;
	SOCKET m_Server;
	serveraddr.sin_family = AF_INET;	//���÷�������ַ����
	serveraddr.sin_port = htons(4600);	//���÷������˿ں�
	serveraddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	m_SockServer = socket ( AF_INET,SOCK_STREAM,  0);
	int i=bind(m_SockServer,(sockaddr*)&serveraddr,sizeof(serveraddr));
	cout << "bind:" << i << endl;
	int iLisRet;
	char buf[]="Welcome to mingrikeyi\0";//��ͻ��˷��͵�����
	int len=sizeof(sockaddr);
	iLisRet=listen(m_SockServer,0);//���м���
	cout << "��ʼ����" << endl;
	m_Server=accept(m_SockServer,(sockaddr*)&serveraddrfrom,&len);//ͬ�⽨������
	if(m_Server!=INVALID_SOCKET)
	{
		send(m_Server,buf,sizeof(buf),0); //�����ַ���ȥ
		cout << "�����ѽ���" << endl;
	}
	WSACleanup();
	return;
}