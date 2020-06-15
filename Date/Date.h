#include <iostream>

class Date {
    private:
        int day, month, year;
    public:
        Date(int, int, int);
        void setDay(int);
        void setMonth(int);
        void setYear(int);
        int getDay();
        int getMonth();
        int getYear();
};