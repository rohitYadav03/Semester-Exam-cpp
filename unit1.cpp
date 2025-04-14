#include <iostream>
using namespace std;

int main() {
    // ✅ UNIT 1 => Introduction to C++

    // Tokens => Smallest individual units in a C++ program
    // Keywords => Reserved words with special meanings (e.g., int, float) that cannot be used as variable names
    // Identifiers => Names used for variables, functions, classes, etc. 
    //                Must start with a letter (A-Z or a-z) or an underscore (_) and cannot use keywords.

    // Literals / Constants => Fixed values that do not change during program execution
    // Variables => Containers used to store data values

    // Data Types =>
    //   1. int     => for integers
    //   2. float   => for decimal numbers (single precision)
    //   3. double  => for large decimal numbers (double precision)
    //   4. string  => for text/strings (requires #include <string>)
    //   5. char    => for a single character
    //   6. bool    => for boolean values: true or false

    // Input/Output =>
    //   cin  >> => to take input
    //   cout << => to print output

    // iostream => A header file that provides cin, cout functionality (preprocessor directive)
    // Namespace => Avoids naming conflicts. Using 'using namespace std;' allows you to write cout instead of std::cout

    // main() function => The entry point of a C++ program. Every C++ program must have one.

    // Operators and Expressions =>
    //   1. Arithmetic    => +, -, *, /, %
    //   2. Logical       => &&, ||, !
    //   3. Assignment    => =, +=, -=, etc.
    //   4. Relational    => ==, !=, >, <, >=, <=

    // Type Casting =>
    //   - Implicit => Automatic type conversion (e.g., int + float results in float)
    //   - Explicit => Manually converting data type (e.g., (float)5 / 2)

    // Control Structures =>
    //   1. if-else
    //   2. Loops:
    //       a. for loop
    //       b. while loop
    //       c. do-while loop

    // 👉 Example of all 3 loops:

    // For Loop
    for (int i = 0; i <= 10; i++) {
        cout << i << "  ";
    }

    // While Loop
    int i = 11;
    while (i <= 20) {
        cout << i << "  ";
        i++;
    }

    // Do-While Loop
    do {
        cout << i << "  ";
        i++;
    } while (i <= 30);

    return 0;
}
