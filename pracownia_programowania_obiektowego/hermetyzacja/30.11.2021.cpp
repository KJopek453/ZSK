#include <iostream>

using namespace std;

class Worker{
	
	private:
		
		string surname{"Nowak"}, division{"Zabawki"};
		float earnings{2500}, tax{0.23};
		unsigned short int yearOfBirthday{1951}, currentYear{2021};

	public:
		void nettoEarnings();
		void changeTax(float pTax);
		void changeEarnings(float pEarnings);
		unsigned short int age();
		
};

void Worker::nettoEarnings()
{
	cout<<"Netto: "<<earnings-earnings*tax<<endl;
}

void Worker::changeTax(float pTax)
{
	tax=pTax;
}

void Worker::changeEarnings(float pEarnings)
{
	earnings=pEarnings;
}
unsigned short int Worker::age()
{
	return currentYear-yearOfBirthday;
}

int main(){
	
	Worker jan;
	jan.nettoEarnings();
	jan.changeTax(0.5);
	jan.nettoEarnings();
	jan.changeEarnings(1000);
	jan.nettoEarnings();
	cout<<"Wiek: "<<jan.age()<<endl;
	
	return 0;
}
