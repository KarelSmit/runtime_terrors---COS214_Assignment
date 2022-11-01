main: main.o State.o 
	g++ -g -o main main.o State.o 

main.o: main.cpp State.h State.cpp 
	g++ -c main.cpp 

State.o: State.cpp State.h
	g++ -c State.cpp

run: main
	./main
	
clean: 
	rm *.o main *~