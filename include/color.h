/**
 * @file color.h
 * 定义终端控制颜色/特效,用于更醒目的显示调试/错误等信息
 * 只要在要显示颜色的字符串两头添加 RED 和 _COLOR 即可
 * 如:
 * 	printf("这是"FG_RED"红色"_COLOR"显示");
 * 	printf("这是"FG_UNDERLINE"下划线"_COLOR"特效");
 * 	printf("这是"FG_RED UNDERLINE"红色下划线"_COLOR"特效显示");
 * 参考:
 * 	<http://basiccoder.com/output-colorful-words-in-terminal.html>
 * \033 = \e = Escape
 * \033[0m	关闭所有属性
 * \033[1m	设置高亮度
 * \033[4m	下划线
 * \033[5m	闪烁
 * \033[7m	反显
 * \033[8m	消隐
 * \033[30m----\33[37m	设置前景色
 * \033[40m----\33[47m	设置背景色
 * \033[nA	光标上移n行
 * \033[nB	光标下移n行
 * \033[nC	光标右移n行
 * \033[nD	光标左移n行
 * \033[y;xH	设置光标位置
 * \033[2J	清屏
 * \033[K	清除从光标到行尾的内容
 * \033[s	保存光标位置
 * \033[u	恢复光标位置
 * \033[?25l	隐藏光标
 * \033[?25h	显示光标
 * 背景色：
 *     40:黑 41:深红 42:绿 43:黄色 44:蓝色 45:紫色 46:深绿 47:白色
 * 前景色：
 *     30:黑 31:红 32:绿 33:黄 34:蓝色 35:紫色 36:深绿 37:白色
 */
#ifndef _COLOR_H_
//Foreground color
#define FG_RED "\e[31m" //颜色
#define FG_GREEN "\e[32m"
#define FG_YELLOW "\e[33m"
#define FG_BLUE "\e[34m"
#define FG_PURPLE "\e[35m"
//效果
#define CLEAR "\033[2J" //清屏
#define TOZERO "\033[0;0H" //这是光标到0 0 位置
#define BOLD "\033[1m" //黑体,加粗
#define UNDERLINE "\033[4m" //下划线效果
#define HIGHLIGHT "\033[7m" //反显
#define FLASH "\033[5m" //闪烁
#define HIDE "\033[8m" //隐藏

#define _COLOR "\e[0m" //一次性关闭所有颜色和特效 类似xml的标签闭合.不需嵌套
#define _COLOR_H
#endif
