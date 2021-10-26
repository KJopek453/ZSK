#include <iostream>
using namespace std;

class Worker
{
public:
	int id{8};
	string name{"Katarzyna"};
	string surname{"Nowak"};
	
	void getData();
	
	Worker(int pId=10, string pName="ANNA", string pSurname="KOWALSKA");
};

Worker::Worker(int pId, string pName, string pSurname)
{
	id=pId;
	name=pName;
	surname=pSurname;
}

void Worker::getData()
{
	cout<<endl<<"imiê: "<<name<<endl<<"Nazwisko: "<<surname<<endl<<"Id: "<<id<<endl;
}

int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"polish");
	
	Worker nowak = Worker();
	nowak.getData();
	
	Worker nowak1=Worker(800,"Tak","Nie");
	nowak1.getData();
	
	Worker nowak2=Worker(800,"Tak");
	nowak2.getData();
	return 0;
}
