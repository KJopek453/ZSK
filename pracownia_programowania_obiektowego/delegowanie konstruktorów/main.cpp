#include<iostream>

using namespace std;

class Rectangle{
    private:
        double sideA, sideB;
        string color;
    public:
        Rectangle();
        Rectangle(double pSideA, double pSideB);
		
		void setColor(string pColor);
		void getData();
    };
	Rectangle::Rectangle()
	{
		cout<<endl<<"Konstruktor domyœlny"<<endl;
		setColor("aqua");
	}
	Rectangle::Rectangle(double pSideA, double pSideB)
	{
		cout<<endl<<"Konstruktor parametryczny"<<endl;
		sideA=pSideA;
		sideB=pSideB;
	}
		
	void Rectangle::setColor(string pColor)
	{
		color=pColor;
	}
	void Rectangle::getData()
	{
		cout<<endl<<"Bok a: "<<sideA<<endl<<"Bok b: "<<sideB<<endl<<"Kolor: "<<color<<endl;
	}

int main(){
    setlocale(LC_CTYPE,"polish");

	Rectangle p1;
	p1.getData();
	
	Rectangle p2(2,4);
	p2.getData();
	p2.setColor("Czarny");
	p2.getData();
	
	/*
	B³¹d
	p2.color="czarny";
	*/
	
    return 0;
}

