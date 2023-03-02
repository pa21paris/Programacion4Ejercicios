#include "Coordenada.hh"

using namespace binario;

Coordenada::Coordenada(int x, int y){
    this->x=x;
    this->y=y;
}

int Coordenada::getX(){
    return this->x;
}

int Coordenada::getY(){
    return this->y;
}

ternario::Coordenada::Coordenada(int x, int y, int z){
    this->x=x;
    this->y=y;
    this->z=z;
}

int ternario::Coordenada::getX(){
    return this->x;
}
int ternario::Coordenada::getY(){
    return this->y;
}
int ternario::Coordenada::getZ(){
    return this->z;
}
