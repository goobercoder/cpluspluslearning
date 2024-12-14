#include <iostream>

std::string thing = "hello "; // making a global variable

void otherfunc();

using std::cout;
using std::cin;
using std::endl;

int main() {

    std::string otherthing = "world"; // a local variable
    cout << thing << otherthing << endl; //i can use a global variable everywhere
    otherfunc();

    return 0;
}

void otherfunc() {
    std::string otherthing = "universe"; // a local variable can be different in different functions 
    // because it exsists is its corrent form in only its own function or block {}
    cout << thing  << otherthing<< endl;
}
