#include <iostream>
#include <string.h>
using namespace std;
class String{
    char *name;
    int length;
    public:
        String(){}
        String(char s[]){
            length = strlen(s);
            name = new char[length];
            strcpy(name,s);
        }
        void display(){
            cout<<endl<<name;
        }
};
int main(){
    String s1,s2;
    char *n1="Namkha";
    char *n2="Gyatso";
    s1=n1;
    s2=n2;
    s1.display();
    s2.display();
    return 0;
}