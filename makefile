main: main.o complex.o
	g++ -g -Wall $^ -o $@

complex.o: complex.cpp complex.h
	g++ -g -c -Wall $< -o $@

main.o: main.cpp complex.h
	g++ -g -c -Wall $< -o $@

.PHONY: clean

clean:
	-rm complex.o main.o main
