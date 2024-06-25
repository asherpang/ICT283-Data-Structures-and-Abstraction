//Regist.h

//---------------------------------------------------------------------------------

#ifndef REGIST_H
#define REGIST_H

//---------------------------------------------------------------------------------

#include "Result.h"
#include <iostream>

using namespace std;

//---------------------------------------------------------------------------------

const int MaxResults = 10; ///Maximum number of results allowed

/**
 * @class Registration
 * @brief Manages the registration details for a student in a particular semester.
 *
 * The Registration class stores the student ID, semester, and a collection of results for various units.
 * It provides methods to add results, retrieve results, and compute total credits based on the registered units.
 *
 *
 * The maximum number of results that can be stored is defined by MaxResults.
 *
 * @author Asher Pang
 * @version 01
 * @date 25/06/2024 Asher Pang, Started
 *
 * @todo Add dynamic resizing of the results array to handle more than MaxResults.
 *
 * @bug No known bugs.
 */

class Registration {
public:
    /**
     * @brief Default constructor
     */
    Registration();

    /**
     * @brief Get the total number of credits for the registered courses
     * @return Total number of credits
     */
    int GetCredits() const;

    /**
     * @brief Get the number of registered courses
     * @return Number of registered courses
     */
    int GetCount() const;

    /**
     * @brief Get the student's ID
     * @return Student ID
     */
    long GetStudentId() const;

    /**
     * @brief Set the student's ID
     * @param studentId Student ID
     */
    void SetStudentId(long studentId);

    /**
     * @brief Get the semester
     * @return Semester
     */
    int GetSemester() const;

    /**
     * @brief Set the semester
     * @param semester Semester
     */
    void SetSemester(int semester);

    /**
     * @brief Add a course result
     * @param result Course result to be added
     */
    void AddResult(const Result& result);

    /**
     * @brief Get a course result by index
     * @param index Index of the course result
     * @return Reference to the course result
     */
    const Result& GetResult(int index) const;

    // These operators have been made friends. They have
    // privileged access to class internals.
    // Very useful for debugging the class, but not very good for class design.
    // We will keep using it for now but you will have a chance in a later lab
    // to redesign this class.

private:
    long studentId;             ///Student ID number
    int semester;               ///Semester year and number
    int count;                  /// Number of registered courses
    Result results[MaxResults]; ///Array of course results
};

/**
 * @brief Output stream operator for Registration
 * @param os Output stream
 * @param R Registration object
 * @return Output stream
 */
std::ostream& operator<<(std::ostream& os, const Registration& R);

/**
 * @brief Input stream operator for Registration
 * @param input Input stream
 * @param R Registration object
 * @return Input stream
 */
std::istream& operator>>(std::istream& input, Registration& R);

#endif // REGIST_H
