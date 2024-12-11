#include <iostream>
// replace std::string (the regular string in c++) with str_t
typedef std::string str_t;

// a more popular alternative
using text_t = std::string;

int main() {
    // making a variable with a string using the typedef type
    str_t hello = "hello world";

    // making a variable with a string using the using type
    text_t world = "world hello";

    // printing them both
    using std::cout;
    
    cout << hello << '\n';
    cout << world;

    
    
    return 0;
}