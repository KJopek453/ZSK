#include <iostream>
using namespace std;

class Worker{
	public:
	//	deklaracja zmiennej cz�onkowskiej
		string name="Janusz";
		string surname;
		unsigned short int age;
	//	definicja funkcji cz�onkowskiej
		void showName(){
			cout<<"Twoje imi�: "<<name<<" "<<surname;
		}
};

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Polish");
	Worker pracownik;
	pracownik.surname="Nowak";
	pracownik.showName();
	pracownik.age= 16;
	cout<<"\nWiek: "<<pracownik.age;
	return 0;
}
