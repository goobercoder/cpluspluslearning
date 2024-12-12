#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    //the fill function
    int size;

    cout << "how big plz: ";
    cin >> size;

    string array[size];

    fill(array, array + (size / 4), "goober");
    fill(array + (size / 4), array + (size / 4)*2, "goog");
    fill(array + (size / 4)*2, array + (size / 4)*3, "hehe");
    fill(array + (size / 4)*3, array + size, "fucker");

    for(string thing : array) {
        cout << thing << ' ';
    }

    return 0;
}
