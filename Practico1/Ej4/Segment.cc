#include "Segment.hh"
#include "Point.hh"
#include <iostream>
using namespace std;

Segment::Segment(Point a, Point b){
    this->a=a;
    this->b=b;
}
Point Segment::getA(){
    return this->a;
}

Point Segment::getB(){
    return this->b;
}

Point Segment::setA(Point a){
    Point previous=this->a;
    this->a=a;
    return previous;
}

Point Segment::setB(Point b){
    Point previous=this->b;
    this->b=b;
    return previous;
}

string Segment::toString(){
    return "["+this->a.toString()+", "+this->b.toString()+"]";
}