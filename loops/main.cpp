#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string name;

    //while loop is like if but it repeats if condition is true.
    while(name.empty()) {
        cout << "enter your name: ";
        std::getline(std::cin, name);
    }
    //they also can be infinite
    //while(true) { }

    cout << endl << "hello, " << name << endl;
    
    //do while loops run the code once before looking at the condition.
    int number;

    do{
        cout << "enter a positive number: ";
        cin >> number;
    }while(number <= 1);

    cout << endl << "your positive number is: " << number << endl;

    //for loops can increment through a list or index

    for(int i = number; i <= 100; i++) {
        cout << i << endl;
    }

    //break and continue can be useful.

    cout << endl;

    for(int i = 5; i >= -20; i--) {

        if(i == 0) { //it skips 0
            continue;
        }

        if(i == -15) { //stops the loop compleatly at -15
            break;
        }

        cout << i << endl;
    }
    
    //nested loops can loop a loop

    cout << endl;

    for(int i = 4; i >= 0; i--){
        for(int i = 1; i <= 5; i++) {
            cout << i << ' ';
        }
        cout << endl;
    }


        
    


    return 0;
}
