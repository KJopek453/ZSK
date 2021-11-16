#include <iostream>
using namespace std;

class Rectangle
{
	public:
		double sideA {0};
		double sideB {0};
	
		Rectangle();
		Rectangle(double pSideA, double psideB);
	
		void getSides();
};

Rectangle::Rectangle(){
};

Rectangle::	Rectangle(double pSideA, double pSideB){
	sideA=pSideB;
	sideB=pSideB;
};

void Rectangle::getSides(){
	
	cout<<"sideA: "<<sideA<<endl<<"sideB: "<<sideB<<endl;
	
};
void getSides(double a, double b){
	
	cout<<"sideA: "<<a<<endl<<"sideB: "<<b<<endl;
	
};

int main(){
	
	setlocale(LC_CTYPE, "polish");
	
	double width = 10;
	double height = 20;
	
	getSides(width, height);
	
	Rectangle p1(5, 10);
	p1.getSides();
	
	Rectangle p2(width, height);
	p2.getSides();
	
	return 0;
}
