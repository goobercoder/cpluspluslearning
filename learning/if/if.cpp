#include <iostream>

int main() {
    using std::cout;
    using std::cin;
    int goober_level;
    cout << "enter your goober level: ";
    cin >> goober_level;
    cout << '\n';
    
    if(goober_level >= 30){
        cout << "youre cool!" << '\n';
    }
    else if(goober_level < 0) {
        cout << "fuck you uncool ungoober";
    }
    else{
        cout << "you are not cool enough!";
    }

    switch (goober_level)
    {
    case 29:
        cout << "almost made it!";
        break;
    case -100:
        cout << "just how????";
        break;
    default:
        cout << "no special stuff, ready to go!";
    }
    return 0;
}