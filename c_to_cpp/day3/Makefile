main:main.o reference.o 
	g++ -o main main.o reference.o 

main.o:main.cpp reference.hpp
	g++ -c main.cpp 

reference.o:reference.cpp reference.hpp 
	g++ -c reference.cpp 

clean:
	rm main.o reference.o 

run:
	./main 
