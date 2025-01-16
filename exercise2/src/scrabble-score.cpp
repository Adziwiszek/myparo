#include "day-of-year.hpp"

int dayOfYear(int month, int dayOfMonth, int year) {
    int leap_year = (year % 100 == 0 && year % 400 == 0) || (year % 4 == 0) ? 1 : 0;

    int dayOfTheYear = dayOfMonth;
    for(int i = 1; i < month; i++) {
        if (i == 2) {
            dayOfTheYear += 28 + leap_year;
        } else if(i <= 7) {
            dayOfTheYear += i % 2 == 1 ? 31 : 30;
        } else {
            dayOfTheYear += 1 % 2 == 0 ? 31 : 30;
        }
    }
    return dayOfTheYear;
}

