#include <iostream>


using std::cout;
using std::cin;
using std::endl;

int main() {
    srand(time(0));
    int num;
    int guess;
    int tries;
    

    cout << "********** number guess **********" << endl;

    do{
        num = (rand() % 20) + 1;
        cout << "guess a number (1-20): ";
        cin >> guess;
        guess = int(guess);
        if(guess != num) {
            cout << "wrong!" << endl;
        }
        tries++;
        cout << "you have tried " << tries << " times" << endl;
    }while(guess != num);
    cout << "right!!!!" << endl;
    cout << "it took you " << tries << " times." << endl;

    return 0;
}
