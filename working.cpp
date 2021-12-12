#include <iostream>
#include <math.h>
using namespace std;
class pointdist
{
    float a;

public:
    pointdist();
    void display()
    {
        cout << "The Distace Between Points is " << a << endl;
    }
};
pointdist::pointdist()
{
    int a1, a2, b1, b2;
    a1= 3;
    a2=4;
    b1=7; 
    b2=9;

    a = sqrt((a2 - a1) + (b2 - b1));
}
int main()
{

    pointdist c;
    c.display();
    return 0;
}