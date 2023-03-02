#ifndef _CLASSA_HH_
#define _CLASSA_HH_
#include "ClassB.hh"

class ClassA{
    private:
        ClassB * myB;
    public:
        ClassA();
        ClassA(ClassB *);
        ClassB* getmyB();
        void setmyB(ClassB *);
};
#endif