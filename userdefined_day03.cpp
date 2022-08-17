#include <iostream>
using namespace std;
class Celsius;
class Fahrenheit{
    private:
        float F;
    public:
        void input(){
            cout<<"Enter the temperature in fahrenheit"<<endl;
            cin>>F;
        }
    operator Celsius();
};
class Celsius{
    private:
        float C;
    public:
        Celsius(){}
        Celsius(float c1){
            C=c1;
        };
        void output(){
            cout<<"The temperature in Celsius is"<<C<<endl;
        }
};
Fahrenheit::operator Celsius(){
    Celsius temp;
    temp = ((F-32)/1.8);
    return temp;
}
int main(){
    Fahrenheit f1;
    Celsius c1;
    f1.input();
    c1=f1; //f1.operator celsius();
    c1.output();
    return 0;
}