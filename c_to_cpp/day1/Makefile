main: main.o day1.o 
	g++ -o main main.o day1.o 

main.o:main.cpp day1.hpp 
	g++ -c main.cpp day1.hpp 

day1.o:day1.cpp day1.hpp 
	g++ -c day1.cpp day1.hpp 

run:
	./main

clean:
	rm day1.o main.o 
