#include <iostream>
#include <string>
#include <cstdlib>
#include "IntComplex.h"
#include "FloatComplex.h"
using namespace std;
int main(int argc, char* argv[]) {
	cout<<" -------------- c++ ASSIGNMENT 2 PART B -------------- "<<endl;
	cout<<"--------------  Mohammad Shahrez Malik -------------- "<<endl;
	cout<<"--------------          241606300      -------------- "<<endl;
	 if (argc >9){
    cout<<"Number of Command line arguments are High."<<endl;
        return 1;
    
    if (argc < 9) {
        cout<<"Number of Command line arguments are Low."<<endl;
        return 1;
    }
    }//starting with 1st index as 0 index is the name of file
    int first_r = atof(argv[1]);  //first argument is taken as  first int real 
    int first_i = atof(argv[2]); //second argument  is taken as  first int imag
    int sec_r = atof(argv[3]); //third argument is taken  second int real
    int sec_i = atof(argv[4]);//fourth argument is taken as second int imag
    IntComplex first_ic(first_r, first_i); //converting the first real and imag nuumber into a int ComplexNumber  
    IntComplex sec_ic(sec_r, sec_i); //converting the second real and imag nuumber into a int ComplexNumber  
    IntComplex add_cn = first_ic + sec_ic; //adding function
    IntComplex sub_cn = first_ic - sec_ic; //subtracting function
    IntComplex mul_cn = first_ic * sec_ic; //mulitplication function 
    IntComplex div_cn = first_ic / sec_ic; //dividing function

    cout << "------ TASK1: RESULTS FOR INTEGER COMPLEX NUMBER " << endl;
    cout<<"Addition Result: "<<endl;
    add_cn.printdetails(); //printing addition results
    cout<<"Subtraction Result: "<<endl;
    sub_cn.printdetails(); //printing subtraction results
    cout<<"Multiplication Result: "<<endl;
    mul_cn.printdetails(); //printing multiplication results
    cout<<"Division Result: "<<endl; 
    div_cn.printdetails(); //printing division results
    
    float r1 = atof(argv[5]); //5th argument is taken as first float real
    float i1 = atof(argv[6]); //6th argument is taken as first float imag
    float r2 = atof(argv[7]); //7th argument is taken as second float real
    float i2 = atof(argv[8]); //8th argument is taken as second float imag

    FloatComplex first_fc(r1, i1); //converting the first real and imag nuumber into a float ComplexNumber 
    FloatComplex sec_fc(r2, i2);//converting the second real and imag nuumber into a int ComplexNumber 

    FloatComplex fc_add = first_fc + sec_fc; //adding function
    FloatComplex fc_sub = first_fc - sec_fc; //subtracting function
    FloatComplex fc_mul = first_fc * sec_fc; //multiplying function
    FloatComplex fc_div = first_fc / sec_fc; //dividing function

    cout << "------ TASK2: RESULTS FOR FLOAT COMPLEX NUMBER " << endl;
    cout<<"Addition Result: "<<endl;
    fc_add.printdetails(); //printing addition results
    cout<<"Subtraction Result: "<<endl;
    fc_sub.printdetails(); //printing subtraction results
     cout<<"Multiplication Result: "<<endl;
    fc_mul.printdetails(); //printing multiplication results
    cout<<"Division Result: "<<endl;
    fc_div.printdetails(); //printing division results

    return 0;
}
