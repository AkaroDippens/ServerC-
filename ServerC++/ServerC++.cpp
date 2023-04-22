#include "CServer_UDP.h"
#include <string>
#include <thread>
#include <iostream>

using namespace std;

int main() {
	CServer_UDP serverUdp;

	thread recProc(&CServer_UDP::RecMsg, &serverUdp);

	while (1) {
		string content;
		cin >> content;
		serverUdp.SendMsg(content.c_str());
	}
}
