#ifndef headerfloat
#define headerfloat

#include "IntComplex.h"
class FloatComplex : public IntComplex {
private: //private variables
    float numreal;
    float numimag;

public:
    FloatComplex();  //default constructor
    FloatComplex(float r, float i);  //non default constructor
    FloatComplex operator+(const FloatComplex& obj) const; //declaring functions
    FloatComplex operator/(const FloatComplex& obj) const;
    FloatComplex operator-(const FloatComplex& obj) const;
    FloatComplex operator*(const FloatComplex& obj) const;
    void printdetails() const; //printing real and imaginary number functions
};
#endif  // ending definition of headerfloat
