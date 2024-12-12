#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() {
    /*
    sizeof() operator returns the size of something in bytes.
    */

    string hello = "hello";
    char things[] = {'h', 'y', 'j', 't'};

    cout << sizeof(char) << " bytes" << endl;
    cout << sizeof(hello) << " bytes" << endl;
    cout << sizeof(things) << " bytes" << endl;

    //with sizeof you can also see how big an array is
    string names[] = {"goober", "doge", "cookie"};
    cout << sizeof(names)/sizeof(string) << " elements\n";

    return 0;
}
