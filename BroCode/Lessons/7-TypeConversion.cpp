#include <iostream>

int main() {

    // Type conversion = conversion a value of one type to another
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)

    int x = 3.14; // Implicit conversion from double to int (3.14 -> 3)
    double y = (int) 3.14; // Explicit conversion

    char c = 100; // Implicit conversion from int to char (100 -> 'd') using the ASCII Table

    std::cout << (char) 100 << '\n'; // 'd'

    int correct = 8;
    int questions = 10;
    double score = correct/(double)questions * 100; // Either the numerator or the denomenator need to be casted to double. Otherwise, they will perform int division and decimal truncation.
    std::cout << "The score is " << score << '%';

    return 0;
}