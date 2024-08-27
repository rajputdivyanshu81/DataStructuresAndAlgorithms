#include<iostream>
#include<cstdio>
using namespace std;

// //this is an example of function overloading 
// //and these things are working at the compile time so it can be called as the compile time poymorphism

// class Add{
//     public:
//     //to add two numbers
//     int sum(int x,int y){
//         return x+y;
//     }

//     //two add three numbers

//     int sum(int x,int y,int z){
//         return x+y+z;
//     }

//     //changing the data type also comes into the pomorphism

//     double sum(double x,double y){
//         return x+y;
//     }
// };
// int main(){
//     int x = 5;
//     int y = 6;
//     int z = 7;

//     Add add;
//    cout <<  add.sum (x,y)<<endl;
//    cout <<  add.sum (x,y,z)<<endl;

//    cout <<  add.sum (5.5,2.3)<<endl;
   

//     return 0;

// }



//next we have the operator overloading

// complex no. k kuch rules
// add or any function can be done real only to real and imaginary to the imaginary



//this cannot work because they dont know that how to add numbers and now we using the whole case of operator overloading

class Complex{
    public:
    int real;
    int imag;

    Complex(){
        real = imag = -1;
    }
    Complex(int r,int i):real(r),imag(i){};

     Complex operator+(const Complex &B){
        //this points to A isntance
        Complex temp;
        temp.real = this->real + B.real;
        temp.imag = this->imag + B.imag;
        return temp;
     }

     Complex operator-(const Complex &B){
        //this points to A isntance
        Complex temp;
        temp.real = this->real - B.real;
        temp.imag = this->imag - B.imag;
        return temp;
     }
    void print(){
        printf("(%d + i%d)\n",this->real,this->imag);
    }
};

int main(){
    Complex A(2,5);
    A.print();
    Complex B(2,3);
    B.print();

    Complex C = A + B;
    cout << "here is the answer after the compilation of the code"<< endl;
    C.print();

    Complex D = A - B;
    D.print();
    return 0;
}