#include <iostream>
#include <vector>

typedef std::vector<std::pair<std::string, int>> pairlist_t; // The new name is known as the identifier
typedef int number_t;

using text_t = std::string;

int main() {

    // Typedef = reserved keyword used to create an additional name
    //           (alias) for another data type.
    //           New identifier for an existing type
    //           Helps with readibility and reduces typos
    //           Use when there is a clear benefit
    //           Replaced with 'using' (work better w/ templates)

    pairlist_t pairlist;
    text_t firstName = "Richard";
    number_t age = 20;

    return 0;
}