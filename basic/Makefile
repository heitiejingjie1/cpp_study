main: main.o struct_demo.o
	g++ -o main main.o struct_demo.o 

main.o:main.cpp
	g++ -c main.cpp 

struct_demo.o:struct_demo.cpp 
	g++ -c struct_demo.cpp 

clean:
	rm main.o struct_demo.o 
