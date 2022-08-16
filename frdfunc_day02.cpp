#include <iostream>
using namespace std;
class Number{
    private:
        int a,b,sum;
    public:
        void input(int n1,int n2){
            a=n1;
            b=n2;
        }
        void output(){
            cout<<"The value of sum is"<<sum;
        }
        friend void add(Number &t); //making friend function but it is not the member function of this class
};
void add(Number &t){
    t.sum = t.a + t.b;
}
int main(){
    Number n1;
    n1.input(8,1);
    add(n1);
    n1.output();

    return 0;
}