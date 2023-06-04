#ifndef headerint
#define headerint
class IntComplex {
private: //private variables
    int numreal;
    int numimag;

public:
    IntComplex(); //default constructor
    IntComplex(int r, int i); //non default constructor
    IntComplex operator+(const IntComplex& obj) const; //declaring functions
    IntComplex operator/(const IntComplex& obj) const;
    IntComplex operator-(const IntComplex& obj) const;
    IntComplex operator*(const IntComplex& obj) const;
    void printdetails() const; //printing real and imaginary number functions
};
#endif  // ending definition of headerint

