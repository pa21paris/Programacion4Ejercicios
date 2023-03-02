#ifndef _CLASSB_HH_
#define _CLASSB_HH_

class ClassA;

class ClassB{
    private:
        ClassA * myA;
    public:
        ClassB();
        ClassB(ClassA*);
        ClassA* getmyA();
        void setmyA(ClassA *);
};

#include "ClassA.hh"

#endif