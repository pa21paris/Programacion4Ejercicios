#include "Fecha.hh"
#include <stdlib.h>

Fecha::Fecha(int day,int month, int year){
    if((day<1) || (day>30)){
        day=1;
    }
    if((month<1) || (month>12)){
        month=1;
    }
    if(year<0){
        year=0;
    }
    this->day=day;
    this->month=month;
    this->year=year;
}

int Fecha::getDay(){
    return this->day;
}
int Fecha::getMonth(){
    return this->month;
}
int Fecha::getYear(){
    return this->year;
}

void Fecha::setDay(int day){
    if((day>=1) || (day<=30)){
        this->day=day;
    }
    
}
void Fecha::setMonth(int month){
    if((month>=1) || (month<=12)){
        this->month=month;
    }
}
void Fecha::setYear(int year){
    if(year>=0){
        this->year=year;
    }
}

Fecha Fecha::operator+(int cant){
    for(int i=0;i<cant;i++){
        if(this->day<30){
            this->day++;
        }else{
            this->day=1;
            if(this->month<12){
                this->month++;
            }else{
                this->month=1;
                this->year++;
            }
        }
    }
    return *this;
}

Fecha Fecha::operator-(int cant){
    for(int i=0;i<cant;i++){
        if(this->day>1){
            this->day--;
        }else{
            this->day=30;
            if(this->month>1){
                this->month--;
            }else{
                this->month=12;
                this->year--;
            }
        }
    }
    return *this;
}

int Fecha::operator-(Fecha date){
    int yearDiff=abs(date.year-this->year);
    int monthDiff=abs(date.month-this->month);
    int dayDiff=abs(date.day-this->day);
    return dayDiff+monthDiff*30+yearDiff*360;
}

bool Fecha::operator=(Fecha date){
    return ((date.day==this->day) && (date.month==this->month) && (date.year==this->year));
}