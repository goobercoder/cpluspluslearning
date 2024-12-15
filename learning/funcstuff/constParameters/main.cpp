#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void func1(string &thing);
void func2(const string &thing);

int main() {
    /* const parameters help in protecting data that does not need to be changed
    this is especially helpful when using memory adresses with functions*/

    string thing = "do not change";
    string thing2 = "do not change";

    func1(thing);
    func2(thing2);


    return 0;
}

void func1(string &thing) {
    //thing was changed
    thing = "changed";
    cout << thing << endl;
}

void func2(const string &thing) {
    //thing now cant be changed
    //thing = "changed";
    cout << thing << endl;
}
