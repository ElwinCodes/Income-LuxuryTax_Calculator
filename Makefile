#compile and link the application
all: main

#run the application
run: main
	./main

#link main.o, incomeTax.o, and luxuryTax.o to executable main
main: main.o incomeTax.o luxuryTax.o
	g++ -g -o main main.o incomeTax.o luxuryTax.o

#compile the main.cpp to main.o
main.o: main.cpp incomeTax.hpp luxuryTax.hpp
	g++ -g -c main.cpp

#compile the incomeTax.cpp to incomeTax.o
incomeTax.o: incomeTax.cpp incomeTax.hpp
	g++ -g -c incomeTax.cpp

#compile the luxuryTax.cpp to luxuryTax.o
luxuryTax.o: luxuryTax.cpp luxuryTax.hpp
	g++ -g -c luxuryTax.cpp

#remove built files
clean:
	rm -rf main main.o incomeTax.o luxuryTax.o *~