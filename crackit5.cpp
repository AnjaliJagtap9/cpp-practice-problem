
#include <iostream>
#include <climits>
#include <cfloat>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    char text[] = "Hello";

    // INTEGER TYPE
    cout << "INTEGER TYPE\n";
    cout << "Size      : " << sizeof(int) << " bytes\n";
    cout << "Range     : " << INT_MIN << " to " << INT_MAX << "\n\n";

    // FLOAT TYPE
    cout << "FLOAT TYPE\n";
    cout << "Size      : " << sizeof(float) << " bytes\n";
    cout << scientific;
    cout << "Range     : " << FLT_MIN << " to " << FLT_MAX << "\n";
    cout << "Precision : " << FLT_DIG << " decimal digits\n\n";

    // DOUBLE TYPE
    cout << "DOUBLE TYPE\n";
    cout << "Size      : " << sizeof(double) << " bytes\n";
    cout << "Range     : " << DBL_MIN << " to " << DBL_MAX << "\n";
    cout << "Precision : " << DBL_DIG << " decimal digits\n\n";

    // CHARACTER TYPE
    cout << "CHARACTER TYPE\n";
    cout << "Size      : " << sizeof(char) << " byte\n";
    cout << "Range     : " << CHAR_MIN << " to " << CHAR_MAX << "\n\n";

    // STRING TYPE
    cout << "STRING TYPE\n";
    cout << "Text      : " << text << "\n";
    cout << "Size      : " << sizeof(text) << " bytes\n";
    cout << "Length    : " << sizeof(text) - 1 << " characters\n";

    return 0;
}

