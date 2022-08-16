#include <iostream>
using namespace std;
class Calculator;
class Complex{
    private:
        int real,img;
    public:
        void input(int a,int b){
            real = a;
            img = b;
        }
        void output(){
            cout<<real<<endl<<img;
        }
    friend int Calculator::sumRealComplex(Complex, Complex);
    friend int Calculator::sumCompComplex(Complex, Complex);
};
class Calculator{
    public:
        int add(int n1,int n2){
            return n1+n2;
        }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex); 
};
int Calculator::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.real + o2.real);
}

int Calculator::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.img + o2.img);
}
int main(){
    return 0;
}