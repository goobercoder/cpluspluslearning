#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    /*logical operators:
    && and
    || or
    ! not
    */


    double temp;

    cout << "the temperature: ";
    cin >> temp;
    cout << endl;

    // and
    if(temp < 20 && temp > 10) {
        cout << "normal finnish weather" << endl;
    }

    //or
    if(temp < 0 || temp > 100) {
        cout << "non ideal for life" << endl;
    }

    //not
    if(temp != 1000) {
        cout << "it is not 1000 degrees" << endl;
    }
    else{
        cout << "it is 1000 degrees" << endl;
    }




    return 0;
}
