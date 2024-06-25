#include "Regist.h"
#include <sstream>

// Default constructor initializes Registration with a count of 0
Registration::Registration() : count(0) {}

// Getter for total credits based on the units in results
int Registration::GetCredits() const {
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += results[i].GetUnit().GetCredits();
    }
    return sum;
}

// Getter for the count of results
int Registration::GetCount() const {
    return count;
}

// Getter for student ID
long Registration::GetStudentId() const {
    return studentId;
}

// Setter for student ID
void Registration::SetStudentId(long studentId) {
    this->studentId = studentId;
}

// Getter for semester
int Registration::GetSemester() const {
    return semester;
}

// Setter for semester
void Registration::SetSemester(int semester) {
    this->semester = semester;
}

// Method to add a result to the registration
void Registration::AddResult(const Result& result) {
    if (count < MaxResults) {
        results[count++] = result;
    }
}

// Getter for a result at a specific index
const Result& Registration::GetResult(int index) const {
    if (index < count) {
        return results[index];
    }
    throw std::out_of_range("Invalid result index");
}

// Overloaded >> operator for input stream to read a Registration object
std::istream& operator>>(std::istream& is, Registration& registration) {
    std::string line;
    if (getline(is, line)) {
        std::stringstream ss(line);
        std::string token;

        // Parse student ID
        if (getline(ss, token, ',')) {
            registration.SetStudentId(std::stol(token));
        }

        // Parse semester
        if (getline(ss, token, ',')) {
            registration.SetSemester(std::stoul(token));
        }

        // Parse result count and add results
        if (getline(ss, token, ',')) {
            int count = std::stoul(token);
            for (int i = 0; i < count; ++i) {
                Result result;
                if (getline(is, line)) {
                    std::stringstream result_ss(line);
                    result_ss >> result;
                    registration.AddResult(result);
                }
            }
        }
    }
    return is;
}

// Overloaded << operator for output stream to print a Registration object
std::ostream& operator<<(std::ostream& os, const Registration& registration) {
    os << "Student ID: " << registration.GetStudentId() << '\n'
       << "Semester: " << registration.GetSemester() << '\n';

    // Print each result in the registration
    for (int i = 0; i < registration.GetCount(); ++i) {
        os << registration.GetResult(i);
    }

    os << "Number of Units = " << registration.GetCount() << '\n'
       << "Total Credits = " << registration.GetCredits() << '\n';

    return os;
}
