#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    
    //foreach loops can iterate over an iterable dataset

    int dumb_numbers[] = {1, 3, 2, 5, 4, 10};

    for(int dumb_number : dumb_numbers) {
        cout << dumb_number << ' ';
    }
    


    return 0;
}
