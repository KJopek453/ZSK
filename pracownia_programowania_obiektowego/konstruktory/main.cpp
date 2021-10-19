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
		Car(int, string, string, string, unsigned short int, float, Date);
};
Car::Car(int pId, string pBrand, string pModel, string pColor, unsigned short int pPower, float pPrice, Date pProductionDate)
{
	id=pId;
	brand=pBrand;
	model=pModel;
	color=pColor;
	power=pPower;
	price=pPrice;
	productionDate=pProductionDate;
}
void Car::getData()
{
	cout<<"\nId: "<<id<<"\nMarka: "<<brand<<"\nModel: "<<model<<"\nKolor: "<<color
	<<"\nMoc: "<<power<<"km"<<"\nCena: "<<price<<"z³"<<"\nRok produkcji: "<<productionDate.yyyy<<"r.";
}
int main(int argc, char** argv) 
{
	setlocale(LC_CTYPE,"polish");
	Car fiat(1, "x", "y", "z", 1, 1, {1,1,1});
	fiat.getData();
	return 0;
}
