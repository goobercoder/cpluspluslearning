#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int rect;
    cout << "how big rectangle?: ";
    cin >> rect;
    rect -= 1;
    cout << endl << endl;

    for(int i = rect; i >= 0; i--) {
        for(int j = rect; j >= 0; j--) {
            cout << '#' << ' ';
        }
        cout << endl;
    }


    return 0;
}
