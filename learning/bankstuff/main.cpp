#include <iostream>
#include <iomanip>

void watismymoni(double moni);
double gimmesomemoni(double moni);
double putsommoni();
void GODPLESENO();

using std::cout;
using std::cin;
using std::endl;

int main() {
    int choise = 0;
    int money = 0;
    do{
        cout << "**********************" << endl;
        cout << "bank thing" << endl;
        cout << "**********************" << endl;
        cout << "1. deposit" << endl;
        cout << "2. withdraw" << endl;
        cout << "3. balance" << endl;
        cout << "4. exit" << endl;
        cout << "5. NO GOD PLEASE NO" << endl;
        cin >> choise;

        cin.clear();
        fflush(stdin);

        switch (choise)
        {
        case 1: money += putsommoni();
            break;    
        case 2: money -= gimmesomemoni(money);
            break;
        case 3: watismymoni(money);
            break;
        case 4: cout << "fuck you too" << endl;
            break;
        case 5: GODPLESENO();
            break;
            
        default: cout << "wrong option bitch" << endl;
            break;
        }
    }while(choise != 4);

    return 0;
}


void watismymoni(double moni) {
    cout << "your balance is: " << std::setprecision(4) << std::fixed << moni << "€" << endl;
}
double gimmesomemoni(double moni) {
    double amount;
    cout << "how much do you want to have greedy bitch: ";
    cin >> amount;
    
    if(amount > moni) {
        cout << "too broke bitch" << endl;
        amount = 0;
    }
    else {
        cout << "ok heve your " << amount << " money" << endl;
    }
    return amount;
}
double putsommoni() {
    double amount = 0;
    cout << "how much money you wanna gimme?: ";
    cin >> amount;
    cout << endl;
    return amount;
}
void GODPLESENO() {
    while(true) {
        cout << "tralalalalalllalalallllllalalal ";
    }
}
