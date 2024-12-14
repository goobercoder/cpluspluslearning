#include <iostream>
#include <string>
using std::cout;
using std::cin;
int main() {
    char mode;
    double number1;
    double number2;
    double result;
    
    cout << "****************************************************" << std::endl;
    cout << "welcome to my great caculator app." << std::endl;
    cout << "please select a mode you want to use (+ - / *): ";
    cin >> mode;
    cout << std::endl << "what is the first number: ";
    cin >> number1;
    cout << std::endl << "second number: ";
    cin >> number2;
    cout << std::endl;


    switch (mode)
    {
    case '+':
        result = number1 + number2;
        break;
    
    case '-':
        result = number1 - number2;
        break;

    case '/':
        result = number1 / number2;
        break;
    
    case '*':
        result = number1 * number2;
        break;
    
    default:
        result = 0;
        cout << "please chose a valid operator!";
        break;
    }
    
    cout << std::endl << "the result of your caculation is: " << result << std::endl;
    cout << "****************************************************";




    return 0;
}