#include <iostream>
#include "Point.hh"
#include "Segment.hh"
using namespace std;

int main(){
    Point *a=new Point();
    Point b=Point(10,10);
    Point c=b;
    Segment s1=Segment(*a,b);
    cout << s1.toString()<<", "<<a->toString()<<", "<< b.toString()<<", "<< c.toString()<<"\n";
    c.setX(20);
    cout << s1.toString()<<", "<<a->toString()<<", "<< b.toString()<<", "<< c.toString()<<"\n";
    
}