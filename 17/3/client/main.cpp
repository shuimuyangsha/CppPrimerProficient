#include <iostream.h>
#include <stdlib.h>
#include "winsock2.h"	

#pragma comment (lib,"ws2_32.lib")	

void main()
{
	
	WSADATA wsd;
	WSAStartup(MAKEWORD(2,2),&wsd);
	SOCKET  	m_SockClient;
	sockaddr_in clientaddr;
	char buffer[1024];//�������ݵĻ���
	int num;//���յ��ֽ���
	clientaddr.sin_family = AF_INET;
	clientaddr.sin_port = htons(4600);
	clientaddr.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	m_SockClient = socket ( AF_INET,SOCK_STREAM, 0 );
	connect(m_SockClient,(sockaddr*)&clientaddr,sizeof(clientaddr));

	num = recv(m_SockClient,buffer,1024,0);//�ȴ�
	if( num > 0 )
	{
		cout << "Receive form server��" << buffer << endl;//������Ϣ
		return;
	}
}


