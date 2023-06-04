#include "IntComplex.h"
#include <iostream>
using namespace std;
IntComplex::IntComplex() { //default constructor
    numreal = 0;
    numimag = 0;
}

IntComplex::IntComplex(int r, int i) { //non default constructor
    numreal = r;
    numimag = i;
}

IntComplex IntComplex::operator+(const IntComplex& obj) const { //adding function
    int p1 = numreal + obj.numreal;    //new real
    int p2 = numimag + obj.numimag;    //new imag
    return IntComplex(p1, p2); 
}

IntComplex IntComplex::operator*(const IntComplex& obj) const { //multipliclation function
    int t1 = numreal * obj.numreal; //formula for multiplication
    int t2 = numimag * obj.numimag;
    int p1 = t1 - t2; //new real
    int s1 = numreal * obj.numimag; //formula for multiplication
    int s2 = numimag * obj.numreal;
    int p2 = s1 + s2; //new imag
    return IntComplex(p1, p2);
}

IntComplex IntComplex::operator-(const IntComplex& obj) const { //subtracting function
    int p1 = numreal - obj.numreal; //new real
    int p2 = numimag - obj.numimag; //new imag
    return IntComplex(p1, p2);
}

IntComplex IntComplex::operator/(const IntComplex& obj) const { //dividing function
    int t1 = obj.numreal * obj.numreal;  //formula to find denominator
    int t2 = obj.numimag * obj.numimag;
    int den = t1 + t2; //denominator
    //formula for division:
    int a1 = numreal * obj.numreal;
    int a2 = numimag * obj.numimag;
    int r = (a1 + a2) / den;  //new real
    int b1 = numimag * obj.numreal;
    int b2 = numreal * obj.numimag;
    int i = (b1 - b2) / den; //new imag
    return IntComplex(r, i);
}

void IntComplex::printdetails() const { //printing real and imaginary number
    cout <<"(Real Number) " << numreal << " +  " <<numimag << "i" <<" (Imaginary Number)" <<endl;
}
