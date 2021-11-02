#include<iostream>

using namespace std;

class Rectangle{
    private:
        double sideA, sideB;
    public:
        Rectangle();
        Rectangle(double pSideA, double pSideB);
        //prototyp konstruktora kopiujacego
        Rectangle(const Rectangle&);

        void catchSides(double &pSideA, double &pSideB);
        void setSides(double pSideA, double pSideB);
        double area();
        double circuite();
        void getSides();
    };
Rectangle::Rectangle(){
    cout<<"konstruktor domyslny \n";
}
Rectangle::Rectangle(double pSideA, double pSideB) {
    cout<<"konstruktor parametryczny \n";
    sideA=pSideA;
    sideB=pSideB;
}

Rectangle::Rectangle(const Rectangle& model) {
    cout<<"konstruktor kopiujacy \n";
    sideA=model.sideA;
    sideB=model.sideB;

}

void Rectangle::catchSides(double &pSideA, double &pSideB){
    pSideA=sideA;
    pSideB=sideB;
}

void Rectangle::setSides(double pSideA, double pSideB){
    sideA=pSideA;
    sideB=pSideB;
}
double Rectangle::area() {
    return sideA*sideB;

}
double Rectangle::circuite() {
    return 2*sideA+2*sideB;
}

void Rectangle::getSides() {
    cout<<"\nbok a: "<<sideA<<"\nbok b: "<<sideB<<endl;
}

Rectangle copyRectangle(Rectangle rectangle){
	return rectangle;
}

int main(){
    setlocale(LC_CTYPE,"polish");

    double a,b;

    cout<<"\nProstok¹t 1: "<<endl;
    Rectangle prostokat1(2,4);
    prostokat1.getSides();
    cout<<"\na: "<<a<<"\nb: "<<b<<endl;

    cout<<"\nProstok¹t 2: "<<endl;
    Rectangle prostokat2=prostokat1;
    prostokat2.catchSides(a,b);
    prostokat2.getSides();
    cout<<"\na: "<<a<<"\nb: "<<b<<endl;
    
	cout<<"\nProstok¹t 3: "<<endl;
    Rectangle prostokat3(prostokat1);
    prostokat3.catchSides(a,b);
    prostokat3.getSides();
    cout<<"\na: "<<a<<"\nb: "<<b<<endl;
    
	cout<<"\nProstok¹t 4: "<<endl;
    Rectangle prostokat4;
    prostokat4=copyRectangle(prostokat1);
    prostokat4.getSides();
    cout<<"\na: "<<a<<"\nb: "<<b<<endl;
    return 0;
}

