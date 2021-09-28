#include <iostream>

using namespace std;
struct Date{
	unsigned short int dd,mm,rrrr;
	
};
class Worker{
	public:
		unsigned int id{};
		string name{}, surname{};
		Date dateBirthday{};
		
		void showAllData();
		void setData();
};
void Worker::showAllData(){
	cout<<"Dane pracownika\n";
	cout<<"Id: "<<id<<endl;
	cout<<"Imiê i nazwisko: "<<name<<" "<<surname<<endl;
	cout<<"Data urodzenia: "<<dateBirthday.dd<<"."<<dateBirthday.mm<<"."<<dateBirthday.rrrr;
};
void Worker::setData(){
	cout<<"Podaj id pracownika: ";
	cin>>Worker::id;
	cout<<"Podaj imiê pracownika: ";
	cin>>Worker::name;
	cout<<"Podaj nazwisko pracownika: ";
	cin>>Worker::surname;
	cout<<"Podaj datê urodzenia pracownika \n";
	cout<<"Dzieñ: ";
	cin>>Worker::dateBirthday.dd;
	cout<<"Miesi¹c: ";
	cin>>Worker::dateBirthday.mm;
	cout<<"Rok: ";
	cin>>Worker::dateBirthday.rrrr;
};
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	Worker kowalski;
	kowalski.setData();
	kowalski.showAllData();
	return 0;
}
