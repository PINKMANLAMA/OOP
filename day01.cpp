#include <iostream>
using namespace std;
class Complex{
    private:
        int real;
        int imaginary;
    public:
        Complex(){}
        Complex(int a, int b){ //member to member copy 
            real = a;
            imaginary = b;
        }
        Complex(Complex &c){ //copy by reference
            real = c.real;
            imaginary = c.imaginary;
        }
        void display(){
            cout<<"real="<<real<<"imaginary="<<imaginary<<endl;
        }

};
int main(){
    Complex c1(10,20);
    Complex c2(c1);
    c1.display();
    c2.display();
    return 0;
}