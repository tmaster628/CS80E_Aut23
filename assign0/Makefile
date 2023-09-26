TARGETS = list

#ARCH = -m32
#CXXBASE = clang++
CXXBASE = g++
CXX = $(CXXBASE) $(ARCH) 
CC = $(CXX)
CXXFLAGS = -ggdb -O -Wall -Werror 

#OBJS = 

OBJS = list.o


all: $(TARGETS)

$(OBJS): $(HEADERS)


# test_submission: test_submission.cc
# 	$(CXX) -o $@ $^

#studentA_submission: studentA_submission.cc
#	$(CXX) -o $@ $^

# autograder: autograder.cc
# 	$(CXX) -o $@ $^

run_tests: $(OBJS) $(LIB)
	$(CXX) -o $@ $^

#RunMain: $(OBJS) $(LIB)
#	$(CXX) -o $@ $(OBJS)

#PointerPlayground: $(OBJS) $(LIB)
#	$(CXX) -o $@ $(OBJS)


clean:
	rm -f $(TARGETS) $(OBJS) *.s *~ .*~

.SUFFIXES: .cc

.PHONY: all clean

