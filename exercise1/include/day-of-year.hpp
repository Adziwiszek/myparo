#include<exception>

class DayOutOfBoundsException : std::exception {
public:
    const char* what() const noexcept override {
        return "Day out of bounds";
    }
};

class MonthOutOfBoundsException : std::exception {
public:
    const char* what() const noexcept override {
        return "Month out of bounds";
    }
};

int dayOfYear(int month, int dayOfMonth, int year);
