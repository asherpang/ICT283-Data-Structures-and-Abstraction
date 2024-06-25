#include "Result.h"
#include <sstream>

// Default constructor initializes Result with a mark of 0.0
Result::Result() : mark(0.0) {}

// Parameterized constructor initializes Result with specified values
Result::Result(const Unit& unit, float mark, const Date& date)
    : unit(unit), mark(mark), date(date) {}

// Setter for Unit
void Result::SetUnit(const Unit& unit) {
    this->unit = unit;
}

// Setter for mark
void Result::SetMark(float mark) {
    this->mark = mark;
}

// Setter for Date
void Result::SetDate(const Date& date) {
    this->date = date;
}

// Getter for Unit
const Unit& Result::GetUnit() const {
    return unit;
}

// Getter for mark
float Result::GetMark() const {
    return mark;
}

// Getter for Date
const Date& Result::GetDate() const {
    return date;
}

// Overloaded << operator for output stream
std::ostream& operator<<(std::ostream& os, const Result& result) {
    os << result.GetUnit() // Output Unit details
       << "\tMarks: " << result.GetMark() << '\n' // Output mark
       << "\tDate: " << result.GetDate() << '\n'; // Output Date details
    return os;
}

// Overloaded >> operator for input stream
std::istream& operator>>(std::istream& is, Result& result) {
    std::string line;
    if (getline(is, line)) {
        std::stringstream ss(line);
        std::string token;

        // Parse the unit part
        Unit unit;
        if (getline(ss, token, ',')) {
            unit.SetId(token); // Extract Unit ID
        }
        if (getline(ss, token, ',')) {
            for (char& c : token) { // Replace underscores with spaces in the name
                if (c == '_') {
                    c = ' ';
                }
            }
            unit.SetName(token); // Extract Unit Name
        }
        if (getline(ss, token, ',')) {
            unit.SetCredits(std::stoi(token)); // Extract credits
        }
        result.SetUnit(unit); // Set the parsed Unit in the Result object

        // Parse the mark
        if (getline(ss, token, ',')) {
            result.SetMark(std::stof(token)); // Extract and set mark
        }

        // Parse the date
        Date date;
        if (getline(ss, token, ',')) {
            std::stringstream date_ss(token);
            date_ss >> date; // Parse Date object
        }
        result.SetDate(date); // Set the parsed Date in the Result object
    }
    return is;
}
