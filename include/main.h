/**
 * @file main.h
 *  山东规约头文件
 */
#ifndef _MIAN_H_
#define _MAIN_H_

#include "protocol.h"
extern "C" CProtocol* CreateCProto_sd2();
class Csd2:public CProtocol{
public:
	Csd2();
	~Csd2();
	void SendProc(void);
	int ReciProc(void);
	virtual int Init(struct stPortConfig *tmp_portcfg);
private:
};
#endif /* _MAIN_H_ */
