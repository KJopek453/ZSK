#include <iostream>

using namespace std;

class Rectangle {
private:

    double sideA;
    double sideB;

public:

    Rectangle();
    Retangle(double sideA, double sideB);
//prototyp konstruktora kopiującego
    Rectangle(const Rectangle&);

};

int main()
{
    setlocale(LC_CTYPE, "polish");



    return 0;
}
