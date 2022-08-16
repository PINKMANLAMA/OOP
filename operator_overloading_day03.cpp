#include <iostream>
using namespace std;
class Integer{
    int i;
    public:
        Integer(int a=0){
            i=a;
        }
        Integer operator ++(int){
            Integer temp;
            temp.i=i++;
            return temp;
        }
        Integer operator ++(){
            Integer temp;
            temp.i=++i;
            return temp;
        }
        void display(){
            cout<<i<<endl;
        }
};
int main(){
    Integer i1(7),i2;
    cout<<"Before pre-increment and post-increment";
    i1.display();
    cout<<"After pre-increment";
    i2=++i1;
    i2.display();
    cout<<"After post-increment";
    i2=i1++;
    i2.display();
    return 0;
}