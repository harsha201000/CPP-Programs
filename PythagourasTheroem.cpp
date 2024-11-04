#include <iostream>
using namespace std;
#include <math.h>
int main(void){
    double Adjacent = 2;
    double Opposite = 3;
    double Hypotenuse = 4;

    // Hypotenuse
    double Hypotenuse1 = (pow(Adjacent,2) + pow(Opposite,2));
    Hypotenuse1 = sqrt(Hypotenuse1);
    cout<<"\n Hypotenuse : "<<Hypotenuse1;

    // Adjacent
    double Adjacent1 = (pow(Hypotenuse,2) - (pow(Opposite,2)));
    Adjacent1 = sqrt(Adjacent1);
    cout<<"\n Adjacent : "<<Adjacent1;

    // Opposite
    double Opposite1 = (pow(Hypotenuse,2) - (pow(Adjacent,2)));
    Opposite1 = sqrt(Opposite1);
    cout<<"\n Opposite : "<<Opposite1;

}