/**
 * @file info.h
 * 定义一些用于显示的宏.如显示前缀,版本号,构建日期等信息.
 */
#ifndef _INFO_H_
#define _INFO_H_
#include "color.h"
#include "version.h"
#include <stdio.h>
//信息字符
#define PROC_PREFIX "[libsd]" ///<应用程序信息前缀
#define LIB_DBG PROC_PREFIX FG_PURPLE"Debug>"_COLOR ///<调试信息
#define LIB_INF PROC_PREFIX FG_GREEN"Info>"_COLOR ///<一般提示信息
#define LIB_WAR PROC_PREFIX FG_YELLOW"Warning>"_COLOR ///<警告信息
#define LIB_ERR PROC_PREFIX FG_RED BOLD"Error>"_COLOR///<错误信息

//打印版本信息
#define PRINT_VERSION { 					\
		printf(LIB_INF"Version:\t"FG_GREEN"%d.%d.%d"_COLOR	\
			" ["FG_RED"%s"_COLOR"]\n", 	 \
		MAJOR, MINOR, PATCHLEVEL,GIT_VERSION); 		\
	}
//打印编译构建的日期和时间，类似：Dec  3 2012 09:59:57
#define PRINT_BUILD_TIME {					\
		printf(LIB_INF"Build time:\t"FG_GREEN"%s %s"_COLOR"\n",\
		 __DATE__, __TIME__);		\
	}
#endif /* _INFO_H_ */
