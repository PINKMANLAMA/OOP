
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
    //Implementing friend function
    friend Distance operator+(Distance &d1, Distance &d2);
    void display()
    {
        cout << "\nTotal Feet & Inches: " << feet << "'" << inch;
    }
};
Distance operator+(Distance &d1, Distance &d2) // Call by reference
{
    Distance d3;
    d3.feet = d1.feet + d2.feet;
    d3.inch = d1.inch + d2.inch;
    return d3;
}

// Driver Code
int main()
{
    Distance d1(8, 9);
    Distance d2(10, 2);
    Distance d3;
    d3 = d1 + d2;
    d3.display();
    return 0;
}