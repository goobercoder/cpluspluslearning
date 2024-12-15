#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string hello = "world";
    char grade = 'F';
    int gooberLevel = 1000000;
    cout << &hello << ' ';
    cout << &grade << ' ';    
    cout << &gooberLevel << ' ';    


    return 0;
}
