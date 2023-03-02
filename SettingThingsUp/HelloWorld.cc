#include <iostream>
using namespace std;

class Coordinate{
    private:
        int x,y;
    public:
        Coordinate();
        Coordinate(int, int);
        void setX(int);
        void setY(int);
        int getX();
        int getY();
        string toString();
};

Coordinate::Coordinate(){
    this->x=0;
    this->y=0;
}
Coordinate::Coordinate(int x, int y){
    this->x=x;
    this->y=y;
}
void Coordinate::setX(int x){
    this->x=x;
}
void Coordinate::setY(int y){
    this->y=y;
}
int Coordinate::getX(){
    return this->x;
}
int Coordinate::getY(){
    return this->y;
}
string Coordinate::toString(){
    return "("+std::to_string(this->x)+","+std::to_string(this->y)+")";
}

int main(){
    Coordinate a(2,2);
    cout << "Hello World\n"<<"My coordinate is "<<a.toString()<<"\n";
}
