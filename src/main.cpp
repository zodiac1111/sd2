/**
 * @file main.cpp
 * 山东营销规约库 lib
 *
 */
#include <stdio.h>
#include "main.h"
#include "info.h"
#include "define.h"
#include "sys_utl.h"
#include "loopbuf.h"
#include "rtclocklib.h"
#include "protocol.h"

extern "C" CProtocol * CreateCProto_sd2()
{
	PRINT_VERSION
	PRINT_BUILD_TIME
	return new Csd2;
}
Csd2::Csd2()
{

}
