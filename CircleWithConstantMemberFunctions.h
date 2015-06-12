
#ifndef __EX06_04__CircleWithConstantMemberFunctions__
#define __EX06_04__CircleWithConstantMemberFunctions__
#include <iostream>
using namespace std;
const int pi= 3.14159265359;
//creating circle class
class Circle{
private:
    //private variables of radius and object numbers
    double radius;
    static int numberOfObjects;
    
public:
    //class functions
    //constructors
    Circle();
    Circle(double newR);
    //get and sets,
    const double getArea();
    const double getRadius();
    void setRadius(double newR);
    static int getNumberOfObjects(){return numberOfObjects;}
    // overloading operator functions
    bool operator<(Circle& c);
    bool operator<=(Circle& c);
    bool operator==(Circle& c);
    bool operator!=(Circle& c);
    bool operator>(Circle& c);
    bool operator>=(Circle& c);

    
    
    
    
};
#endif
