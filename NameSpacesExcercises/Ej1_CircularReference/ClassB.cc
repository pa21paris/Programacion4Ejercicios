#include "ClassB.hh"

ClassB::ClassB(){
    this->myA=new ClassA();
}

ClassB::ClassB(ClassA *myA){
    this->myA=myA;
}

ClassA* ClassB::getmyA(){
    return this->myA;
}

void ClassB::setmyA(ClassA *myA){
    this->myA=myA;
}