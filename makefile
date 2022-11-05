main: main.o War.o IntelDivision.o Records.o User.o
	g++ -g -o main main.o War.o IntelDivision.o Records.o User.o

main.o: main.cpp War.h War.cpp IntelDivision.h IntelDivision.cpp Records.h Records.cpp User.h User.cpp
	g++ -c main.cpp 

User.o: User.cpp User.h
	g++ -c User.cpp

War.o: War.cpp War.h
	g++ -c War.cpp

IntelDivision.o: IntelDivision.cpp IntelDivision.h
	g++ -c IntelDivision.cpp

Records.o: Records.cpp Records.h
	g++ -c Records.cpp

run: main
	./main
	
clean: 
	rm *.o main *~