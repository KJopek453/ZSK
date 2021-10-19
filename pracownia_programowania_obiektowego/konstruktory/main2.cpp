#include <iostream>
using namespace std;
struct Date
{
	int dd, mm, yyyy;
};
class Car
{
	public:
		int id;
		string brand, model, color;
		unsigned short int power;
		float price;
		Date productionDate;
		
		void getData();
		Car(int, string, unsigned short int, float, Date);

};
Car::Car(int, string, unsigned short int, float, Date)
{
	
}
void Car::getData()
{
	cout<<"\nId: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nKolor: "<<color
	<<"\nMoc: "<<power<<"km"<<"\nCena: "<<price<<"z³"<<"\nRok produkcji: "<<productionDate.yyyy<<"r.";
}
int main(int argc, char** argv) 
{
	setlocale(LC_CTYPE,"polish");
	Car fiat(123, "x", 1, 1, {1,1,2});
	fiat.getData();
	return 0;
}
