#include <iostream>
//function declarations
char getAndShowchoiseuser();
char getAndShowchoisecomputeraiwoo();
void determinewinner(char player, char computer);


using std::cout;
using std::cin;
using std::endl;

int main() {
    char player;
    char ai;
    cout << "===================================" << endl;
    cout << "rok papaer skissors gaem" << endl;
    

    player = getAndShowchoiseuser();
    cout << "===================================" << endl;
    ai = getAndShowchoisecomputeraiwoo();
    cout << "===================================" << endl;
    determinewinner(player, ai);


    return 0;
}

//function declarations
char getAndShowchoiseuser() {
    char player;
    do{
    cout << "===================================" << endl;
    cout << "determine your choice" << endl;
    cout << "r for rok" << endl;
    cout << "s for skissor" << endl;
    cout << "p for paeper" << endl;
    cout << "now choose: ";
    cin >> player;
    }while(player != 'r' && player != 's' && player != 'p');

    switch (player) {
    case 'r':
        cout << "you chose rok" << endl;
        break;

    case 'p':
        cout << "you chose paeper" << endl;
        break;

    case 's':
        cout << "you chose skissors" << endl;
        break;
    }

    return player;
}
char getAndShowchoisecomputeraiwoo() {
    srand(time(NULL));

    int aiNum = (rand() % 3) + 1; 
    char aiChoise;

    switch (aiNum)
    {
    case 1:
        aiChoise = 'r';
        cout << "ai chose rok" << endl;
        break;
    
    case 2:
        aiChoise = 's';
        cout << "ai chose skissor" << endl;
        break;

    case 3:
        aiChoise = 'p';
        cout << "ai chose paeper" << endl;
        break;
    }
    return aiChoise;
}
void determinewinner(char player, char computer) {
    if(player == computer){
        cout << "the game ended in a tie." << endl;
    }
    else{
       switch (player)
       {
        case 'r':
            if(computer == 'p') {cout << "you lost to the komputer." << endl;}
            else {cout << "you won." << endl;}
            break;

        case 'p':
            if(computer == 's') {cout << "you lost to the komputer." << endl;}
            else {cout << "you won." << endl;}
            break;

        case 's':
            if(computer == 'r') {cout << "you lost to the komputer." << endl;}
            else {cout << "you won." << endl;}
            break;
       
       } 
    }
}
