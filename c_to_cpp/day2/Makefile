main:main.o day2.o 
	g++ -o main main.o day2.o 

main.o:main.cpp day2.hpp 
	g++ -c main.cpp 

day2.o:day2.cpp day2.hpp 
	g++ -c day2.cpp 

clean:
	rm main.o day2.o 

run:
	./main 
