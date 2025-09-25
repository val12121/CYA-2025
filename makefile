# Makefile para cya-P02-strings.cc
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -O2
SRCS = cya-P02-strings.cc
OBJS = $(SRCS:.cc=.o)
TARGET = cya-P02-strings

.PHONY: all clean run debug

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

run: $(TARGET)
	./$(TARGET)

debug: CXXFLAGS += -g -O0
debug: clean all

clean:
	rm -f $(OBJS) $(TARGET)
