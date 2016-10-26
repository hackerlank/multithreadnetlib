#ifndef  _READ_BUFFER_H__
#define _READ_BUFFER_H__

#include "socketbuffer.h"
#include "netmodeldef.h"

class SocketWrapper;
class ReadBuffer: public SocketBuffer
{
	friend class SocketWrapper;
 private:  
	 ReadBuffer(sockfd fd);
	~ReadBuffer();
	ReadBuffer(const ReadBuffer & readBuffer);
	ReadBuffer &  operator = (const ReadBuffer & socketBuffer);
	
	//���ܺ���������������Ϣ����node�ÿ��node��󳤶ȹ̶�
	//���Ȳ��������µ�node����������Ϣ
	//�ڽ��ܹ��ܵ�node�moff��node�Ѿ����յ����ݴ�С
	int receive(Node * node);
	
	int popData(char * buf, int len);

	int m_nTotal;
};



#endif
