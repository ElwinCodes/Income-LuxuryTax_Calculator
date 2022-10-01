#compile and link the application
all: main

#run the application
run: main
	./main

#link main.o, time.o, and date.o to executable main
main: main.o incomeTax.o luxuryTax.o
	g++ -g -o main main.o incomeTax.o luxuryTax.o

#compile the main.cpp to main.o
main.o: main.cpp incomeTax.hpp luxuryTax.hpp
	g++ -g -c main.cpp

#compile the time.cpp to time.o
incomeTax.o: incomeTax.cpp incomeTax.hpp
	g++ -g -c incomeTax.cpp

#compile the date.cpp to date.o
luxuryTax.o: luxuryTax.cpp luxuryTax.hpp
	g++ -g -c luxuryTax.cpp

#remove built files
clean:
	rm -rf main main.o incomeTax.o luxuryTax.o *~