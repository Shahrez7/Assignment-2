#include "FloatComplex.h"
#include <iostream>
using namespace std;

FloatComplex::FloatComplex() : IntComplex() {
    numreal = 0.0;
    numimag = 0.0;
}

FloatComplex::FloatComplex(float r, float i) : IntComplex(static_cast<int>(r), static_cast<int>(i)) {
    numreal = r;
    numimag = i;
}

FloatComplex FloatComplex::operator+(const FloatComplex& obj) const {
    float p1 = numreal + obj.numreal; //new real
    float p2 = numimag + obj.numimag; //new imag
    return FloatComplex(p1, p2);
}

FloatComplex FloatComplex::operator*(const FloatComplex& obj) const {
    float t1 = numreal * obj.numreal; //formula for multiplication
    float t2 = numimag * obj.numimag;
    float p1 = t1 - t2;//new imag
    float s1 = numreal * obj.numimag; //formula for multiplication
    float s2 = numimag * obj.numreal;
    float p2 = s1 + s2; //new imag
    return FloatComplex(p1, p2);
}

FloatComplex FloatComplex::operator-(const FloatComplex& obj) const {
    float p1 = numreal - obj.numreal; //new real 
    float p2 = numimag - obj.numimag; //new imag
    return FloatComplex(p1, p2);
}

FloatComplex FloatComplex::operator/(const FloatComplex& obj) const {
    float t1 = obj.numreal * obj.numreal; //formula to find denominator
    float t2 = obj.numimag * obj.numimag;
    float den = t1 + t2; //denominator
    //formula for division
    float a1 = numreal * obj.numreal;
    float a2 = numimag * obj.numimag;
    float r = (a1 + a2) / den; //new real
    float b1 = numimag * obj.numreal;
    float b2 = numreal * obj.numimag;
    float i = (b1 - b2) / den; //new imag
    return FloatComplex(r, i);
}

void FloatComplex::printdetails() const { //printing real and imaginary number
    cout <<"(Real Number) " << numreal << " +  " <<numimag << "i" <<" (Imaginary Number)" <<endl;
}
