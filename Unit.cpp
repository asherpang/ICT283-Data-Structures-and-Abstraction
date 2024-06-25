#include "Unit.h"
#include <sstream>

// Default constructor initializes Unit with empty name, empty id, and 0 credits
Unit::Unit() : name(""), id(""), credits(0) {}

// Parameterized constructor sets Unit with specified values
Unit::Unit(const std::string& unit_name, const std::string& unit_id, unsigned cred)
    : name(unit_name), id(unit_id), credits(cred) {}

// Getter for unit name
const std::string& Unit::GetName() const {
    return name;
}

// Setter for unit name
void Unit::SetName(const std::string& unit_name) {
    name = unit_name;
}

// Getter for unit id
const std::string& Unit::GetId() const {
    return id;
}

// Setter for unit id
void Unit::SetId(const std::string& unit_id) {
    id = unit_id;
}

// Getter for credits
unsigned Unit::GetCredits() const {
    return credits;
}

// Setter for credits
void Unit::SetCredits(unsigned cred) {
    credits = cred;
}

// Overloaded >> operator for input stream
std::istream& operator>>(std::istream& input, Unit& U) {
    std::string line;
    if (getline(input, line)) {
        std::stringstream ss(line);
        std::string token;

        // Extract id
        if (getline(ss, token, ',')) {
            U.SetId(token);
        }

        // Extract name
        if (getline(ss, token, ',')) {
            // Replace underscores with spaces in the name
            for (char& c : token) {
                if (c == '_') {
                    c = ' ';
                }
            }
            U.SetName(token);
        }

        // Extract credits
        if (getline(ss, token, ',')) {
            U.SetCredits(std::stoi(token));
        }
    }
    return input;
}

// Overloaded << operator for output stream
std::ostream& operator<<(std::ostream& os, const Unit& U) {
    os << "\tUnit ID: " << U.GetId() << '\n'
       << "\tUnit Name: " << U.GetName() << '\n'
       << "\tCredits: " << U.GetCredits() << '\n';
    return os;
}
