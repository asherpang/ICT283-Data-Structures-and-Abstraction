#include "Unit.h"
#include "Regist.h"

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream inputFile( "rinput.txt" ); // Opens an input file stream

  if( !inputFile ) return -1; // Checks if the file opening failed

  Registration R;  // Creates a Registration object

  inputFile >> R;   // Reads a Registration object from the input file

  std::cout << R; // Outputs the Registration object to the console

  // Example of constructing a Unit object, reading from stdin, and printing to stdout
  Unit u;
  std::cin >> u;
  std::cout << u;

  return 0;
}
