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
        friend Celsius::Celsius(Fahrenheit);

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
    Celsius(Fahrenheit);
};
Celsius::Celsius(Fahrenheit obj){
    Celsius temp;
    temp = (obj.F-32)/1.8;
}
int main(){
    Fahrenheit f1;
    Celsius c1;
    f1.input();
    c1=f1; //c1=Celsius(f1)
    c1.output();
    return 0;
}