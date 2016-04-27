all: CiperCover

CiperCover: CDataChain.o CDataSimple.o CWorkspace.o main.o
	g++ CDataChain.o CDataSimple.o CWorkspace.o main.o -o CiperCover

CDataChain.o: CDataChain.cpp
	g++ -c CDataChain.cpp

CDataSimple.o: CDataSimple.cpp
	g++ -c CDataSimple.cpp

CWorkspace.o: CWorkspace.cpp
	g++ -c CWorkspace.cpp

main.o: main.cpp
	g++ -c main.cpp

clear: 
	rm -rf *o CiperCover