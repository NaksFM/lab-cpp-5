#include <iostream>
#include "CDataSimple.h"

using namespace std;

int main (int argc, char* argv[]) {
	CDataSimple dataSimple;
	dataSimple.Generate(15, 19);

	 cout << dataSimple.GetFullString() << endl;

	return 0;
}