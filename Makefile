# 山东规约Makefile文件
.PHONY : all clean debug  doc version

# 头文件目录 (移动过的话主要在这里定义目录路径)
INCS = -Iinclude \
	-I../include \
	-I../../../../include \
	-I../../base102/include \
	-I"/home/lee/test/mycheckout/hl3104/trunk/hl3104jd/软件/hl3104/include" \
	-I"/home/lee/test/mycheckout/hl3104/trunk/hl3104jd/软件/hl3104/src/ha/include" \
	-I"/home/lee/test/mycheckout/hl3104/trunk/hl3104jd/软件/hl3104/src/protocollib/base102/include" 
# 库文件目录
LIBS = 

# 库名 & 源文件
NAME	= sd2
SOURCE = src/main.cpp

# 编译器
CC = arm-linux-gcc
CXX = arm-linux-g++

# 编译器选项(debug/release)
ifdef DEBUG
	CFLAGS = -Wall -Wextra -g
	CXXFLAGS = -Wall -Wextra -g
else
	CFLAGS = -Os
	CXXFLAGS = -Os
endif

# 输出选项,输出的库位置
OUTPUT_DIR = output
OUTPUT_OPTION = -o $(OUTPUT_DIR)/lib$@.so

all: #优化版本
	@$(MAKE) $(NAME)
debug: #调试版本
	@$(MAKE) $(NAME) "DEBUG = 1"

# 编译方式	
$(NAME):$(SOURCE)
	$(CXX)  $(CXXFLAGS) -shared $(LIBS) $(INCS) 	\
	$(SOURCE) 					\
	$(OUTPUT_OPTION)

# 编译生成文档,::依赖每次都编译(?)
doc::
	doxygen Doxyfile

# 版本
version::
	./makeversion.sh
	
# 清理
clean::
	rm -rf $(OUTPUT_DIR)/*