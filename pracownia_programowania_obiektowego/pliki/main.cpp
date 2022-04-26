#include <iostream>
#include <fstream>
#include <stdlib.h>

using std::cout;
using std::string;
using std::endl;
using std::cin;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "polish");


	std::ofstream File;
	File.open("plik.txt", std::ios::app);

	if(File.is_open())
	{
		cout << "Podaj dane do zapisu w pliku" << endl;
		string text;
		getline(cin,text);
		File << text << endl;
		File.close();
	}
	else
	{
		cout << "error";
	}

	system("cls");

	std::ifstream FileOpen("plik.txt");
	if(FileOpen.is_open()){
        cout << "Zawartoœæ pliku: " << endl;
        string line;
        while(getline(FileOpen, line)) cout << line << endl;
        FileOpen.close();
	}
	else{
        cout << "error";
	}
	return 0;
}
