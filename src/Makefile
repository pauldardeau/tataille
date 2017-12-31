# Copyright Paul Dardeau, SwampBits LLC 2014
# BSD License

CC = c++
CC_OPTS = -c -Wall -std=c++98
ARCHIVE_CMD = ar
ARCHIVE_OPTS = rs

LIB_NAME = libtataille.a

OBJS = GUIDisplayEngine.o \
GUIDisplayEngineWindow.o

all : $(LIB_NAME)

clean :
	rm -f *.o
	rm -f $(LIB_NAME)
	
$(LIB_NAME) : $(OBJS)
	$(ARCHIVE_CMD) $(ARCHIVE_OPTS) $(LIB_NAME) $(OBJS)

%.o : %.cpp
	$(CC) $(CC_OPTS) $< -o $@
