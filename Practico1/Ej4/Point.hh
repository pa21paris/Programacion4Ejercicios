#include <iostream>
using namespace std;

#ifndef POINTHH
#define POINTHH

class Point{
    private:
        int x, y;
    public:
        Point(int=0, int=0);
        int getX();
        int getY();
        void setX(int);
        void setY(int);
        string toString();
};
#endif