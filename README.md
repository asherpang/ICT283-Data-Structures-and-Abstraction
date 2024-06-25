# ICT283 Data Structures and Abstraction Course Registration Program

#### Overview

This repository contains a C++ project implementing a course registration system. The system is designed to manage course results using a custom `Vector` class, analogous to `std::vector`, but simplified for specific requirements. The project includes several related classes for managing dates, course units, student results, and registration details.

#### Features

- **Custom Vector Implementation**: A simplified version of `std::vector` tailored for the project.
- **Course Management**: Classes to manage dates, course units, student results, and registration details.
- **Unit Coordinator Management**: Each unit includes a coordinator with details such as name, room number, telephone number, and email.
- **Doxygen Documentation**: Comprehensive Doxygen-style comments are used throughout the codebase for documentation.

#### Repository Structure

- `DATE.h` and `DATE.cpp`: Implements the `Date` class for managing dates.
- `REGIST.H` and `REGIST.CPP`: Implements the `Registration` class for handling registration details.
- `RESULT.h` and `RESULT.cpp`: Implements the `Result` class for managing student results.
- `UNIT.H` and `UNIT.CPP`: Implements the `Unit` class for managing course units.
- `MAIN.CPP`: Contains the `main` function to drive the application.

#### Getting Started

To compile and run the project:

1. Ensure you have a C++ compiler installed (e.g., g++ or clang++).
2. Clone the repository to your local machine:
   ```sh
   git clone https://github.com/yourusername/courseregistration.git
   cd courseregistration
   ```
3. Compile the project:
   ```sh
   g++ MAIN.CPP DATE.cpp REGIST.CPP RESULT.cpp UNIT.CPP -o CourseRegistration
   ```
4. Run the executable:
   ```sh
   ./CourseRegistration
   ```

#### Documentation

The project uses Doxygen for generating documentation. To generate the documentation:

1. Ensure you have Doxygen installed.
2. Navigate to the root directory of the repository.
3. Run Doxygen:
   ```sh
   doxygen Doxyfile
   ```

This will generate the documentation in the `docs` directory.

#### Contact

For any questions or feedback, please contact:

- **Name**: Asher Pang
- **Email**: asherpangtg@gmail.com

---
