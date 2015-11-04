# minimal makefile for SE class
all: tests test 
# main depends on all cpp files
tests: $(patsubst %.cpp,%.o,$(filter-out ../main.cpp, $(wildcard ../*.cpp)) tests.cpp)
	g++ --std=c++11 -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ --std=c++11 -Wall -c -o $@ $<

test:
	./tests

clean:
	rm tests *.o

