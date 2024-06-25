//Result.h

//---------------------------------------------------------------------------------

#ifndef RESULT_H
#define RESULT_H

//---------------------------------------------------------------------------------

#include "Unit.h"
#include "Date.h"
#include <iostream>

//---------------------------------------------------------------------------------

/**
 * @class Result
 * @brief Manages course results for students.
 *
 * The Result class encapsulates the details of a student's result for a particular unit,
 * including the unit information, the mark obtained, and the date the result was recorded.
 *
 *
 * The maximum number of results that can be stored is defined by MaxResults.
 *
 *
 * @author Asher Pang
 * @version 01
 * @date 25/06/2024 Asher Pang, Started
 *
 * @todo Implement validation for mark values to ensure they are within a valid range.
 *
 * @bug No known bugs.
 */

class Result {
public:
    /**
     * @brief Default constructor
     */
    Result();

    /**
     * @brief Constructor with parameters
     * @param unit The course unit
     * @param mark The mark obtained
     * @param date The date of the result
     */
    Result(const Unit& unit, float mark, const Date& date);

    /**
     * @brief Set the course unit
     * @param unit The course unit
     */
    void SetUnit(const Unit& unit);

    /**
     * @brief Set the mark
     * @param mark The mark obtained
     */
    void SetMark(float mark);

    /**
     * @brief Set the date
     * @param date The date of the result
     */
    void SetDate(const Date& date);

    /**
     * @brief Get the course unit
     * @return The course unit
     */
    const Unit& GetUnit() const;

    /**
     * @brief Get the mark
     * @return The mark obtained
     */
    float GetMark() const;

    /**
     * @brief Get the date
     * @return The date of the result
     */
    const Date& GetDate() const;

private:
    Unit unit;   ///The course unit
    float mark;  ///The mark obtained
    Date date;   ///The date of the result
};

/**
 * @brief Input stream operator for Result
 * @param input The input stream
 * @param R The Result object
 * @return The input stream
 */
std::istream& operator>>(std::istream& input, Result& R);

/**
 * @brief Output stream operator for Result
 * @param os The output stream
 * @param R The Result object
 * @return The output stream
 */
std::ostream& operator<<(std::ostream& os, const Result& R);

#endif // RESULT_H
