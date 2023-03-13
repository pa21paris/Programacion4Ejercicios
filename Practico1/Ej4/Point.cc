#include "Point.hh"

Point::Point(int x, int y){
    this->x=x;
    this->y=y;
}

int Point::getX(){
    return this->x;
}

int Point::getY(){
    return this->y;
}

void Point::setX(int x){
    this->x=x;
}

void Point::setY(int y){
    this->y=y;
}

string Point::toString(){
    return "("+to_string(this->x)+","+to_string(this->y)+")";
}