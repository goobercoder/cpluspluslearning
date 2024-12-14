#include <iostream>
#include <string>




int main() {
    using std::string;
    using std::cout;
    using std::cin;
    
    string name;
    int age;
    
    cout << "whats your name?: ";
    std::getline(cin >> std::ws, name);
    cout << '\n';
    cout << "how old are you?: ";
    cin >> age;
    cout << '\n';
    cout << "your name is: " << name;
    cout << '\n';
    cout << "you are " << age << " years old.";

    return 0;
}