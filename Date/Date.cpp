#include "Date.h"

Date::Date(int month, int day, int year){
    //check if the month is between 12 months
    if(month >= 1 && month <= 12){
        //check the month
        this->month = month;
        if(month == 2){
            //check if the day number is inside the number of days of this month
            if(day >= 1 && day <= 28)
                this->day = day;
            else
                this->day = 1;
        }else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
            if(day >= 1 && day <= 31)
                this->day = day;
            else
                this->day = 1;
        }else{
            if(day >= 1 && day <= 30)
                this->day = day;
            else
                this->day = 1;
        }
    }else{
        this->month = 1; //in case the added month is not among the 12 will be setted month 1

        if(day >= 1 && day <= 31) //check if the day number is inside the number of days of this month
            this->day = day;
        else
            this->day = 1;
    }

    this->year = year; //set the year 
}

void Date::setDay(int day){
    //chech the month
    if(this->month == 2){
        //check if the day number is inside the number of days of this month
        if(day >= 1 && day <= 28)
            this->day = day;
        else
            this->day = 1;
    }else if(this->month == 1 || this->month == 3 || this->month == 5 || this->month == 7 || this->month == 8 || this->month == 10 || this->month == 12){
        if(day >= 1 && day <= 31)
            this->day = day;
        else
            this->day = 1;
    }else{
        if(day >= 1 && day <= 30)
            this->day = day;
        else
            this->day = 1;
    }
}

void Date::setMonth(int month){
    if(month >= 1 && month <= 12){
        this->month = month;
    }
}

void Date::setYear(int year){
    this->year = year;
}

int Date::getDay(){
    return this->day;
}

int Date::getMonth(){
    return this->month;
}

int Date::getYear(){
    return this->year;
}