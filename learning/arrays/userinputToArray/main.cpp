#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    //putting user input into an array
    string array[3];
    int size = sizeof(array) / sizeof(array[0]);
    string temp;
    

    for(int i = 0; i < size; i++) {
        cout << "what is something you like ig or q to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp != "q") {
            array[i] = temp;
        }
        else {
            break;
        }
    }

    for(string thing : array) {
        cout << "you like: " << thing << endl;
    }


    return 0;
}
