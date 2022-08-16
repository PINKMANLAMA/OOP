
#include <iostream>

using namespace std;

class Distance
{
    int feet, inch;

public:
    Distance()
    {
        feet = 0;
        inch = 0;
    }
    Distance(int f, int i)
    {
        feet = f;
        inch = i;
    }
    Distance operator+(Distance &d2) // Call by reference
    {
        Distance d3;
        d3.feet = feet + d2.feet;
        d3.inch = inch + d2.inch;
        return d3;
    }
    void display(){
        cout << "\nTotal Feet & Inches: " <<feet << "'" <<inch;
    }
};

// Driver Code
int main()
{
    Distance d1(8, 9);
    Distance d2(10, 2);
    Distance d3;
    d3 = d1 + d2; //d1.operator +(d2);
    d3.display();
    return 0;
}