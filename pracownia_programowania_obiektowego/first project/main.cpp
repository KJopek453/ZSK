#include <iostream>
using namespace std;

class Worker{
	public:
	//	deklaracja zmiennej cz³onkowskiej
		string name="Janusz";
		string surname;
		unsigned short int age;
	//	definicja funkcji cz³onkowskiej
		void showName(){
			cout<<"Twoje imiê: "<<name<<" "<<surname;
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
