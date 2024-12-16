#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int SumEvenNums(string Card);
int SumOddNums(string Card);
int GetDigit(int x);

int main() {
    string Card;
    int response = 0;
    cout << "******************************" << endl;
    cout << "credit card validator programm" << endl;
    cout << "******************************" << endl;
    cout << "input credit card number: " << endl;
    cin >> Card;

    response = SumEvenNums(Card) + SumOddNums(Card);

    if(response % 10 == 0) {
        cout << "credit card is valid";
    }
    else {
        cout << "credit card is invalid";
    }

    


    return 0;
}

int SumEvenNums(string Card) {
    int sum = 0;
    for(int i = Card.size() -2; i >= 0; i -=2) {
        sum += GetDigit((Card[i] - 48) * 2);
    }
    return sum;

    
}
int SumOddNums(string Card) {
    int sum = 0;
    for(int i = Card.size() - 1; i >= 0; i -=2) {
        sum += Card[i] - 48;
    }
    return sum;
}

int GetDigit(int x) {
    return x % 10 + (x / 10 % 10);
}

