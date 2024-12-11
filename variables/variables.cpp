#include <iostream>

int main() {
    // full number
    int x = 5;

    // floating point number
    double y = 6.9;

    // one character
    char grade = 'a';

    // boolean
    bool is_old = true;

    // string (more than one character)
    std::string best_word = "goober";

    // constants (read only)
    const double pi = 3.14159;
    const std::string worst_sentence = "i hate goober";

    // printing
    std::cout << "the best word is: " << best_word << '\n';
    std::cout << "the worst sentence is: " << worst_sentence << '\n';
    
    return 0;
}