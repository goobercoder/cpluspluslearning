#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    char fromunit;
    double to_be_converted;
    double result;


    cout << "*****************TEMPERATURE CONVERSION*******************" << endl;
    cout << "from what unit do you want to convert? (C, K): ";
    cin >> fromunit;
    cout << endl << "how much do you want to convert?: ";
    cin >> to_be_converted;
    cout << endl;

    
    switch (fromunit)
    {
    case 'c':
        result = to_be_converted + 273.15;
        cout << to_be_converted << " celsius is: " << result << " kelvin";
        break;

    case 'k':
        result = to_be_converted - 273.15;
        cout << to_be_converted << " kelvin is: " << result << " celsius";
        break;

    default:
        cout << "unknown unit" << endl;
        result = 0;
        break;
    }

    cout << endl << "****************************************************************";

    return 0;
}
