#include <iostream>
#include "CDataSimple.h"
#include "CWorkspace.h"

using namespace std;

int main (int argc, char* argv[]) {
	//CDataSimple dataSimple;
	//dataSimple.Generate(15, 20);

	//cout << dataSimple.GetFullString() << endl;
	CDataSimple data;
	CWorkspace ws(data);
	return 0;
}