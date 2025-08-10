main:main.o clock.o 
	g++ -o main main.o clock.o 

main.o:main.cpp clock.hpp 
	g++ -c main.cpp 

clock.o:clock.cpp clock.hpp 
	g++ -c clock.cpp 

clean:
	rm main.o clock.o 

run:
	./main 
