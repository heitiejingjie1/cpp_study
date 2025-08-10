main:main.o object_use.o 
	g++ -o main main.o object_use.o 

main.o:main.cpp object_use.h 
	g++ -c main.cpp 

object_use.o:object_use.cpp object_use.h 
	g++ -c object_use.cpp 

clean:
	rm main.o object_use.o 
	rm main 

run:
	./main 
