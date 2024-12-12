#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    /*
    arrays are lists of things like strings or numbers.
    */
    //example:
    string goobers[] = {"me", "goober404", "aurel", "enderecho4k"};

    cout << goobers[0] << endl;
    cout << goobers[1] << endl;

    //you can also declare them befoe filling them
    int numbers[5];

    numbers[0] = 1;
    numbers[3] = 4;

    //this place is empty so it will just print out memory shit
    cout << numbers[1] << endl;

    //this will print out 1
    cout << numbers[0] << endl;


    //fun fact: strings are an array of characters
    char stingg[] = "hello world";
    cout << stingg << endl;


    //you can also iterate over an array
    string array[] = {"funnystuff", "hellofunny", "yay"};

    for(int i = 0; i < sizeof(array)/sizeof(string); i++) {
        cout << array[i] << endl;
    }
    return 0;
}
