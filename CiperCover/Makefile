all: CiperCover

CiperCover: CDataChain.o CDataSimple.o CWorkspace.o CDlgCommand.o CDialogManager.o CLink.o main.o
	g++ CDataChain.o CDataSimple.o CWorkspace.o CDlgCommand.o CDialogManager.o CLink.o main.o -o _CiperCover_

CDataChain.o: CDataChain.cpp
	g++ -c CDataChain.cpp

CDataSimple.o: CDataSimple.cpp
	g++ -c CDataSimple.cpp

CWorkspace.o: CWorkspace.cpp
	g++ -c CWorkspace.cpp

CDlgCommand.o: CDlgCommand.cpp
	g++ -c CDlgCommand.cpp

CDialogManager.o: CDialogManager.cpp
	g++ -c CDialogManager.cpp

#LINKS
CLink.o: CLink.cpp
	g++ -c CLink.cpp

main.o: main.cpp
	g++ -c main.cpp

clear: 
	rm -rf *o _CiperCover_