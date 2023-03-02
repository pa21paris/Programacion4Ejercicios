#include "ClassA.hh"

ClassA::ClassA(){
    this->myB=new ClassB();
}

ClassA::ClassA(ClassB *myB){
    this->myB=myB;
}

ClassB* ClassA::getmyB(){
    return this->myB;
}

void ClassA::setmyB(ClassB *myB){
    this->myB=myB;
}