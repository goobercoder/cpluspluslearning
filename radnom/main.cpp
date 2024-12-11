#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {

    srand(time(0)); // gives the random number gen a seed based on time.

    int num = rand(); //a random number
    cout << num << endl;

    int num2 = rand() % 6; // a random number between 0, 5
    cout << num2 << endl;

    int num3 = (rand() % 6) + 1; // a random number between 1, 6
    cout << num3 << endl;


    //random events

    int randnum = rand() % 3 + 1; //making a random number between 1, 3

    switch (randnum)
    {
    case 1:
        cout << "you get 1 nothing" << endl;
        break;
    
    case 2:
        cout << "you get 2 nothing!!!" << endl;
        break;

    case 3:
        cout << "you get 3 nothing!!!!!!!!!!!!!!" << endl;
        break;
    }

    return 0;
}
