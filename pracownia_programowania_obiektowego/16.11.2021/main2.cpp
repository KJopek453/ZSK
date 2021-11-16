#include <iostream>
using namespace std;

class Rectangle
{
	
	private:
		
		double sideA {0};
		double sideB {0};
		
	public:	
	
		Rectangle();
		Rectangle(double pSideA, double psideB);
		
		void setSideA(double sideA);
		void setSideB(double sideB);
		
		double getSideA();
		double getSideB();
		
};

Rectangle::Rectangle()
{
};

Rectangle::Rectangle(double pSideA, double pSideB)
{
	sideA=pSideA;
	sideB=pSideB;
}

void Rectangle::setSideA(double pSideA)
{
	sideA=pSideA;
}

void Rectangle::setSideB(double pSideB)
{
	sideB=pSideB;
}
		
double Rectangle::getSideA()
{
	return sideA;
}

double Rectangle::getSideB()
{
	return sideB;
}

int main(){
	
	setlocale(LC_CTYPE, "polish");
	
	double width = 10;
	double height = 20;
	
	Rectangle p1;
	cout<<p1.getSideA()<<endl;
	
	p1.setSideA(width);
	p1.setSideB(height);
	
	cout<<p1.getSideA()<<endl;
	cout<<p1.getSideB()<<endl;
	
	return 0;
}
