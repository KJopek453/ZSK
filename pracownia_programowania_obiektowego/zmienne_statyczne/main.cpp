#include <iostream>
using namespace std;
class School{
	public:
		static string s_school;
		static string s_jobPosition;
		
		string name;
		string surname;
		
		void getData();
		void setNameSurname(string name, string surname); 
		
		static string s_getSchool();
		static void s_setSchool(string pSchool){
			s_school=pSchool;
		}
};


	string School::s_school="ZSK";
	string School::s_jobPosition="Student";
	void School::getData(){
		cout<<"Imi� i nazwisko: "<<name<<" "<<surname;
	}
	
	
	void School::setNameSurname(string name, string pSurname){
		School::name=name;
		surname=pSurname;
	}
	
	
	string School::s_getSchool(){
		return s_school;
	}
	
	
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");
	
	
	cout<<School::s_school<<endl;
	cout<<School::s_jobPosition<<endl;
	
	
	School kowal;
	kowal.setNameSurname("Janusz","Kowal");
	kowal.getData();
	
	
	School::s_jobPosition="Wyk�adowca";
	cout<<"\nStanowisko: "<<School::s_jobPosition;
	
	
	//zmienienie warto�ci zmiennej statycznej dla obiektu zmiena r�wnie� warto�� dla klasy
	kowal.s_jobPosition="\nDziekan";
	cout<<kowal.s_jobPosition;
	cout<<School::s_jobPosition<<endl;
	
	cout<<School::s_getSchool()<<endl;
	
	School::s_setSchool("XXX");
	cout<<School::s_getSchool();
	return 0;
}
