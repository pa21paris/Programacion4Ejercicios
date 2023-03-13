#include "Point.hh"
#include <iostream>
using namespace std;

class Segment{
    private:
        Point a,b;
    public:
        Segment();
        Segment(Point, Point);
        Point getA();
        Point getB();
        //Retrun previous point
        Point setA(Point);
        //Return previous point
        Point setB(Point);
        string toString();
};