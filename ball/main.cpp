#include <iostream> 
#include "Ball.h"
#include "Test.h"
using namespace std; 

int main() {
    Ball ball1;
    cout << ball1.name() << "\t"
         << ball1.volumn() 
         << endl;
 
    ball1.name("green ball");
    ball1.radius(2.5);
    cout << ball1.name() << "\t"
         << ball1.volumn() 
         << endl;

    Ball ball2(5.0, "black ball");
    cout << ball2.name() << "\t"
         << ball2.volumn() 
         << endl; 
 
    string name("yellow ball");
    Ball ball3(10.0, name);
 
    cout << ball3.name() << "\t"
         << ball3.volumn() 
         << endl;
    Test t1;
    t1.ball(&ball3);
    Ball *ball12;
    ball12 = t1.ball();

    cout << ball12->name() << "\t"
         << ball12->volumn() 
         << endl;

    return 0; 
}
