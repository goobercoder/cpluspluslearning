#include <iostream>
#include <string>

using namespace std;

void examplefunction(string stuff[], int size);

int main() {
    /*
    Arrays are lists of things like strings or numbers.
    */
    
    // Example:
    string goobers[] = {"me", "goober404", "aurel", "enderecho4k"};

    cout << goobers[0] << endl;
    cout << goobers[1] << endl;

    // You can also declare them before filling them
    int numbers[5];

    numbers[0] = 1;
    numbers[3] = 4;

    // This place is empty, so it will just print out some default garbage value
    cout << numbers[1] << endl;

    // This will print out 1
    cout << numbers[0] << endl;

    // Fun fact: strings are an array of characters
    char stingg[] = "hello world";
    cout << stingg << endl;

    // You can also iterate over an array
    string array[] = {"funnystuff", "hellofunny", "yay"};

    for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        cout << array[i] << endl;
    }

    // This is how you pass arrays to a function
    string things[] = {"hello", "me", "i my life"};
    int sizeOfThings = sizeof(things) / sizeof(things[0]); // Correctly calculate size
    examplefunction(things, sizeOfThings);

    return 0;
}

void examplefunction(string stuff[], int size) {
    for (int i = 0; i < size; i++) {
        cout << stuff[i] << endl;
    }
}
