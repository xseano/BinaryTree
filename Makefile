# Makefile
# oberoi, sean
# ssoberoi

APPNAME=tree

CXX=g++
RM=rm -f

CXXFLAGS=-g -Wall -O -std=c++14
LDFLAGS=
LDLIBS=

SRCS=Main.cpp BinaryTree.h BinaryTree.cpp
CPP-SRCS=Main.cpp
OBJS=$(subst .cpp,.o,$(CPP-SRCS))

all: $(APPNAME)

$(APPNAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) -o $(APPNAME) $(OBJS) $(LDLIBS)

.depend: $(SRCS)
	$(RM) ./.depend
	$(CXX) $(CXXFLAGS) -MM $^>>./.depend;

clean:
	$(RM) $(OBJS)
	$(RM) $(APPNAME)
	$(RM) ./.depend

include .depend
