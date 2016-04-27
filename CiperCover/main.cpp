#include <iostream>
#include <string>
#include "CDataSimple.h"
#include "CWorkspace.h"

using namespace std;

int main (int argc, char* argv[]) {
	CDataSimple dataSimple;
	dataSimple.Generate(15, 20);

	//cout << dataSimple.GetFullString() << endl;

	CWorkspace ws(dataSimple);
	string pathToFile("save.bin");
	ws.Load(pathToFile);
	cout << dataSimple.GetFullString() << endl;
	//ws.Save(pathToFile);
	return 0;
}