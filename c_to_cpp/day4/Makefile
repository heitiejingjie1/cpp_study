main:main.o day4.o
	g++ -o main main.o day4.o 

main.o:main.cpp day4.hpp 
	g++ -c main.cpp 

day4.o:day4.cpp day4.hpp 
	g++ -c day4.cpp 

clean:
	rm main.o day4.o 

run:
	./main 
