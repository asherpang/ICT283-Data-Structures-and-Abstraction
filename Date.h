// Date.h

//---------------------------------------------------------------------------------

#ifndef DATE_H
#define DATE_H

//---------------------------------------------------------------------------------

#include <iostream>

//---------------------------------------------------------------------------------

 	/**
	 * @class Date
	 * @brief Class representing a date with day, month, and year.
	 *
	 * Models are constructed using Harry's block class.
	 * Room templates contain references to several models, and are used to place
	 * furniture in rooms. Models do not support collision detection.
	 *
	 *
	 * Template names can contain multiple words (ie with spaces).\n
	 * Case differences are ignored in template names, but not model names.\n
	 * Models are standard bdl files.\n
	 *
	 * @author Mark Iskra
	 * @version 01
	 * @date 26/09/2007 Mark Iskra, Started
	 *
	 * @author The monkey
	 * @version 02
	 * @date 27/09/2009 The Monkey, Added more comments
	 *
	 *
	 * @todo Let Harry know his block class is being used.
	 *
	 * @bug My program has no bugs. Well, maybe it has...
	 * @bug The program didn't make my cofee right.
	 */

class Date {
public:
    /**
     * @brief Default constructor initializing date to 1/1/1900.
     */
    Date();

    /**
     * @brief Constructor initializing date with given day, month, and year.
     * @param day Day of the month.
     * @param month Month of the year.
     * @param year Year.
     */
    Date(int day, int month, int year);

    /**
     * @brief Set the day of the month.
     * @param day Day of the month.
     */
    void SetDay(int day);

    /**
     * @brief Set the month of the year.
     * @param month Month of the year.
     */
    void SetMonth(int month);

    /**
     * @brief Set the year.
     * @param year Year.
     */
    void SetYear(int year);

    /**
     * @brief Get the day of the month.
     * @return Day of the month.
     */
    int GetDay() const;

    /**
     * @brief Get the month of the year.
     * @return Month of the year.
     */
    int GetMonth() const;

    /**
     * @brief Get the year.
     * @return Year.
     */
    int GetYear() const;

private:
    int day;
    int month;
    int year;
};

/**
 * @brief Output operator for Date.
 * @param os Output stream.
 * @param date Date object to output.
 * @return Output stream.
 */
std::ostream& operator<<(std::ostream& os, const Date& date);

/**
 * @brief Input operator for Date.
 * @param is Input stream.
 * @param date Date object to input.
 * @return Input stream.
 */
std::istream& operator>>(std::istream& is, Date& date);

#endif // DATE_H
