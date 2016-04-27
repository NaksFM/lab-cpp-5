#include <iostream>
#include <string>
#include "CDataSimple.h"
#include "CWorkspace.h"
#include "CDialogManager.h"

using namespace std;

void initSequence(CWorkspace& ws) {
	int nDepth = 0;
	int nMaxLength = 0;
	
	cout << "Vkazit do yakogo chisla generuvatu poslidovnist" << endl;
	cin >> nDepth;
	cout << "Vvedit dovzinu poslidovnisti" << endl;
	cin >> nMaxLength;

	ws.Init(nDepth, nMaxLength);
}

void showFullSequence(CWorkspace& ws) {
	cout << ws.GetChainString() << endl;
}

void saveSequence(CWorkspace& ws) {
	string path;
	cout << "Vrite where to save, or Enter * to use default path (save.bin)" << endl;
	cin >> path;
	if (path.length() == 1 && path[0] == '*') {
		path = "save.bin";
	}
	ws.Save(path);
}

void loadSequence(CWorkspace& ws) {
	string path;
	cout << "Vrite path to file, or Enter * to use default path (save.bin)" << endl;
	cin >> path;
	if (path.length() == 1 && path[0] == '*') {
		path = "save.bin";
	}
	ws.Load(path);
}



int main (int argc, char* argv[]) {
	//CDataSimple dataSimple;
	//dataSimple.Generate(15, 20);

	//cout << dataSimple.GetFullString() << endl;

	//CWorkspace ws(dataSimple);
	//string pathToFile("save.bin");
	//ws.Load(pathToFile);
	//cout << dataSimple.GetFullString() << endl;
	//ws.Save(pathToFile);

	CDataSimple data;
	CWorkspace ws(data);
	CDialogManager mgr(ws);
	mgr.RegisterCommand("Init sequence", initSequence);
	mgr.RegisterCommand("Show sequence", showFullSequence);
	mgr.RegisterCommand("Save", saveSequence);
	mgr.RegisterCommand("Load", loadSequence);
	mgr.Run();

	return 0;
}