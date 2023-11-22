#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main() {

    // Namespace = provides a solution for preventing name conflicts
    //             in large projects. Each entity needs a unique name.
    //             A namespace allows for identically named entities
    //             as long as the namespaces are different.

    using namespace first; // This effectively brings all the names from the namespace into the current scope
    std::cout << x << '\n';

    using namespace second;
    // Loading two namespaces with same-named variables with different values will raise an ambiguous name error, 
    //     because the two same-named variables with different values are within the same scope

    int x = 0; // "Name hiding" is when you declare a local variable wtih the same name as one from a namespace within the same scope.
    // The declared local variable always takes precedence.  

    // int x = 1; This would raise an error, because you cannot re-declarate a variable with an already existing variable name

    using namespace first;

    std::cout << x << '\n';
    std::cout << first::x << '\n';
    std::cout << second::x << '\n';
    // The '::' is known as the scope resolution operator


    using std::cout;
    using std::string;
    string greeting = "hello there, how are you";
    cout << greeting;

    return 0;
}