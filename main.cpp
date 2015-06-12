#include <iostream>
#include "CircleWithConstantMemberFunctions.h"
using namespace std;
int main (){
    //setting up testing objects
    
    const int size=4;
    Circle c1;
    Circle c2(5);
    Circle c3(2);
    Circle c4(.5);
    //put objects into an array for simple sorting
    Circle ordered[size]={c1,c2,c3,c4};
    
//nested loop to repeat swapping action
    for (int i=0; i<size-1; i++) {
        for (int i=0; i<size-1; i++) {
            //overloaded funtion to determine bigger or smaller (could use other symbols.. >=, <=)
        if (ordered[i]>ordered[i+1])
        {
            Circle newc=ordered[i];
            ordered[i]=ordered[i+1];
            ordered[i+1]=newc;
        }}
    }
   
    //displaying newley swapped values
    cout << ordered[0].getRadius()<< endl;
    cout << ordered[1].getRadius()<< endl;
    cout << ordered[2].getRadius()<< endl;
    cout << ordered[3].getRadius()<< endl;
    //displays number of objects created
    cout << c4.getNumberOfObjects()<< " Objects created"<<   endl;
    
    
    
    
    return 0;
    
}