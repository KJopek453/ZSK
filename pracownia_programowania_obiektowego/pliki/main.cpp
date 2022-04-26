#include <iostream>
#include <fstream>

using std::cout;
using std::string;
using std::endl;
using std::cin;

int main(int argc, char** argv) {
	setlocale(LC_ALL, "polish");
	
	std::ofstream File;
	File.open("C:\\Users\\student\\Desktop\\pliki2\\plik.txt", std::ios::app);
	
	if(File.is_open())
	{
		cout<<"Podaj dane do zapisu w pliku"<<endl;
		string text;
		getline(cin,text);
		File << text << endl;
		File.close();
	}
	else
	{
		cout << "error";
	}
	
	
	return 0;
}
