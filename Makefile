# minimal makefile for SE class
all: main test

# main depends on all cpp files
main: $(patsubst %.cpp,%.o,$(wildcard *.cpp))
	g++ --std=c++11 -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ --std=c++11 -Wall -c -o $@ $<

test:
	./main DollarToEuro 10000
	./main MilesToMeter 13.13
	./main EuroToDollar -1.0

clean:
	rm main *.o

