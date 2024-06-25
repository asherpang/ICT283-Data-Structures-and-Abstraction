#include "Date.h"

// Default constructor initializes Date to 01/01/1900
Date::Date() : day(1), month(1), year(1900) {}

// Parameterized constructor sets Date to specified values
Date::Date(int day, int month, int year) : day(day), month(month), year(year) {}

// Setter for day
void Date::SetDay(int day) {
    this->day = day;
}

// Setter for month
void Date::SetMonth(int month) {
    this->month = month;
}

// Setter for year
void Date::SetYear(int year) {
    this->year = year;
}

// Getter for day
int Date::GetDay() const {
    return day;
}

// Getter for month
int Date::GetMonth() const {
    return month;
}

// Getter for year
int Date::GetYear() const {
    return year;
}

// Overloaded << operator for output stream
std::ostream& operator<<(std::ostream& os, const Date& date) {
    os << date.GetDay() << '/' << date.GetMonth() << '/' << date.GetYear();
    return os;
}

// Overloaded >> operator for input stream
std::istream& operator>>(std::istream& input, Date& date) {
    int day, month, year;
    char slash1, slash2;
    input >> day >> slash1 >> month >> slash2 >> year; // read day, month, year separated by slashes
    return input;
}
