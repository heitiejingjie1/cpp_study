main:main.o c_in_cpp.o 
	g++ -o main main.o c_in_cpp.o 

main.o:main.cpp c_in_cpp.h 
	g++ -c main.cpp 

c_in_cpp.o:c_in_cpp.cpp c_in_cpp.h 
	g++ -c c_in_cpp.cpp 

clean: 
	rm main.o c_in_cpp.o 
	rm main 

run:
	./main 
