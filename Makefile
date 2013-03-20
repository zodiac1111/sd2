#山东规约Makefile文件
.PHONY : all clean debug doc version
#库名 & 源文件
NAME	= sd2
SOURCE = src/main.cpp

#编译器
CC = arm-linux-gcc
CXX = arm-linux-g++
#编译器选项
CFLAGS = -Wall -Wextra -g 
CXXFLAGS = -Wall -Wextra -g 
#头文件目录
INCS = 
#库文件目录
LIBS = 

#输出选项,输出的库位置
OUTPUT_OPTION = -o output/lib$@.so

#编译成库
all:$(NAME)
$(NAME):$(SOURCE)
	$(CC)  $(CXXFLAGS) -shared $(LIBS) $(INCS) 	\
	$(SOURCE) 					\
	$(OUTPUT_OPTION)

#编译生成文档,::依赖每次都编译(?)
doc::
	doxygen Doxyfile

#版本
version::
	./makeversion.sh