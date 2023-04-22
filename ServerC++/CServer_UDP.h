#pragma once

#include <winsock2.h>

class CServer_UDP
{
public:
	CServer_UDP();
	~CServer_UDP();
	void SendMsg(const char sendBuf[]);
	void RecMsg();
private:
	SOCKET m_sSeerver;
	struct sockaddr_in m_SocAddrClient;
	bool m_terminal;
};

