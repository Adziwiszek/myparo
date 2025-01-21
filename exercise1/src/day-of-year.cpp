#include "day-of-year.hpp"

int dayOfYear(int month, int dayOfMonth, int year) {
    if(month < 1 || month > 12)
        throw MonthOutOfBoundsException();

    int leapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 1 : 0;

    int maxDays;
    if (month == 2) {
        maxDays = 28 + leapYear;
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        maxDays = 30;
    } else {
        maxDays = 31;
    }

    if(dayOfMonth < 1 || dayOfMonth > maxDays)
        throw DayOutOfBoundsException();

    int dayOfTheYear = dayOfMonth;
    for(int i = 1; i < month; i++) {
        if (i == 2) {
            dayOfTheYear += 28 + leapYear;
        } else if(i <= 7) {
            if(i % 2 == 1) {
                dayOfTheYear += 31;
            } else {
                dayOfTheYear += 30;
            }
        } else {
            dayOfTheYear += 1 % 2 == 0 ? 31 : 30;
        }
    }
    return dayOfTheYear;
}

