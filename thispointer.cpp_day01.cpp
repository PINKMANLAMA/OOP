#include <iostream>
using namespace std;
class Number{
    private:
        int num;
    public:
        void setData(int num){
            this->num=num; //num=num return garbage value
        }
        void getData(){
            cout<<num;
        }

};
//This pointer points to the current object invoking the member function.
int main(){
    Number num1;
    num1.setData(10);
    num1.getData();
    return 0;
}