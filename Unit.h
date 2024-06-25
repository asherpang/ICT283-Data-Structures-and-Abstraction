// Unit.h

//---------------------------------------------------------------------------------

#ifndef UNIT_H
#define UNIT_H

//---------------------------------------------------------------------------------

#include <iostream>
#include <string>

//---------------------------------------------------------------------------------

/**
 * @class Unit
 * @brief Represents a unit/course in the system.
 *
 * The Unit class holds information about a unit, including its name, ID, and credit value.
 * It provides methods to set and get these details, as well as overloaded stream operators
 * for input and output operations.
 *
 *
 * Unit names can contain multiple words and are case-sensitive. The credit value is an integer
 * representing the credit points awarded for the unit.
 *
 *
 * @author Asher Pang
 * @version 01
 * @date 25/06/2024 Asher Pang, Started
 *
 * @todo Add validation to ensure credit values are within a valid range.
 *
 * @bug No known bugs.
 */

class Unit {
public:
    /**
     * @brief Default constructor
     */
    Unit();

    /**
     * @brief Constructor with parameters
     * @param unit_name The name of the unit
     * @param unit_id The ID of the unit
     * @param cred The credit value of the unit
     */
    Unit(const std::string& unit_name, const std::string& unit_id, unsigned cred);

    /**
     * @brief Get the name of the unit
     * @return The name of the unit
     */
    const std::string& GetName() const;

    /**
     * @brief Set the name of the unit
     * @param unit_name The new name of the unit
     */
    void SetName(const std::string& unit_name);

    /**
     * @brief Get the ID of the unit
     * @return The ID of the unit
     */
    const std::string& GetId() const;

    /**
     * @brief Set the ID of the unit
     * @param unit_id The new ID of the unit
     */
    void SetId(const std::string& unit_id);

    /**
     * @brief Get the credit value of the unit
     * @return The credit value of the unit
     */
    unsigned GetCredits() const;

    /**
     * @brief Set the credit value of the unit
     * @param cred The new credit value of the unit
     */
    void SetCredits(unsigned cred);

private:
    std::string name;   ///The name of the unit
    std::string id;     ///The ID of the unit
    unsigned credits;   /// The credit value of the unit
};

/**
 * @brief Output stream operator for Unit
 * @param os The output stream
 * @param U The Unit object
 * @return The output stream
 */
std::ostream& operator<<(std::ostream& os, const Unit& U);

/**
 * @brief Input stream operator for Unit
 * @param input The input stream
 * @param U The Unit object
 * @return The input stream
 */
std::istream& operator>>(std::istream& input, Unit& U);

#endif // UNIT_H
