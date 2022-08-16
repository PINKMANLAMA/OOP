#include <iostream>
using namespace std;
class Complex{
    int real,imaginary;
    public:
        friend istream& operator>>(istream&,Complex&);
        friend ostream& operator<<(ostream&,Complex&);
};
istream& operator>>(istream &i,Complex &x){
    i>>x.real>>x.imaginary;
    return i;
}
ostream& operator<<(ostream &i,Complex &x){
    i<<x.real<<x.imaginary;
}
int main(){
    Complex c1;
    cin>>c1;
    cout<<c1;
    return 0;
}