

#include "CircleWithConstantMemberFunctions.h"
//default constructor for circle class
Circle::Circle(){
    radius=1;
    numberOfObjects++;
}
//constructor with specified radius
Circle::Circle(double newR){
    radius=newR;
    numberOfObjects++;

    
}
//area calulation class function
const double Circle::getArea(){
    return pi*radius*radius;
    
}
//returns radius
const double Circle::getRadius(){
    return radius;
    
}//sets radius to specified value
void Circle::setRadius(double newR){
    if (newR>=0)
    radius=newR;
    else
        radius=1;

}
int Circle::numberOfObjects=0;


//operator overloading functions
//instead of comparing the class it compares the class' radius's
//functions overloading <, >, <=, >=, ==, and !=
bool Circle::operator<(Circle& c){
    return (getRadius()<c.getRadius());
}
bool Circle::operator<=(Circle& c){
    return (getRadius()<=c.getRadius());
}
bool Circle::operator==(Circle& c){
    return (getRadius()==c.getRadius());
}
bool Circle::operator!=(Circle& c){
    return (getRadius()!=c.getRadius());
}
bool Circle::operator>(Circle& c){
    return (getRadius()>c.getRadius());
}
bool Circle::operator>=(Circle& c){
    return (getRadius()>=c.getRadius());
}
