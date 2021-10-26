#include <iostream>

using namespace std;

class Worker
{
	const int id{ 0 };
	string name, surname;

public:
	
	Worker();
	Worker(int id, string name, string surname);
	void getData();

};

Worker::Worker():
	id{ -1 },
	name{ "Imię domyślne" },
	surname{ "Nazwisko domyślne" }
{
	cout <<endl<< "Konstruktor domyślny"<<endl;
}

Worker::Worker(int pId, string pName, string pSurname):
	id{pId},
	name{ pName },
	surname{ pSurname }
{
	cout <<endl<< "Konstruktor parametryczny"<<endl;
}

void Worker::getData()
{
	cout << endl << "imię: " << name << endl << "Nazwisko: " << surname << endl << "Id: " << id<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "polish");

	Worker nowak;
	nowak.getData();

	Worker nowak2=Worker();
	nowak2.getData();

	Worker kowalski(10,"Janusz","Kowalski");
	kowalski.getData();

	Worker kowalski2=Worker(10, "Janusz2", "Kowalski2");
	kowalski2.getData();

	return 0;
}