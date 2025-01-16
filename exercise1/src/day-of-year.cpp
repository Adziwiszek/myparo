#include "day-of-year.hpp"
#include <string>




int dayOfYear(int month, int dayOfMonth, int year) {
    int leap_year = (year % 100 == 0 && year % 400 == 0) || (year % 4 == 0) ? 1 : 0;

    int dayOfTheYear = dayOfMonth;
    for(int i = 1; i < month; i++) {
        if (i == 2) {
            dayOfTheYear += 28 + leap_year;
        } else if(i <= 7) {
            if(i % 2 == 1) 
                dayOfTheYear += 31;
            else
                dayOfTheYear += 30;
        } else {
            if(i % 2 == 0) 
                dayOfTheYear += 31;
            else
                dayOfTheYear += 30;
        }
    }
    return dayOfTheYear;
}

