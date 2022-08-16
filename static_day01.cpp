#include <iostream>
using namespace std;
class Employee{
    private:
        int id;
        static int count; //commom to all class so it is made static
    public:
        void input(){
            cout<<"Enter the id"<<endl;
            cin>>id;
            count++;
        }
        static void output(){
            //cout<<id;//non static member throws an error
            cout<<count;
        }
        void display(){
            cout<<"Id is"<<id<<endl;
        }
};
int Employee::count;
int main(){
    Employee Namkha,Gyatso,lama;
    Namkha.input();
    Namkha.display();
    Employee::output(); //accessing static member function by using class name rather than object name
    Gyatso.input();
    Gyatso.display();
    Employee::output();
    return 0;
}
