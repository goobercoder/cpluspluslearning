#include <iostream>

int searcharray(int array[], int size, int whatIWannaFind);

using std::cout;
using std::cin;
using std::endl;


int main() {
    int array[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(array) / sizeof(array[0]);
    int index;
    int mynum;
    cout << ": ";
    cin >> mynum;
    // make done




    return 0;
}

int searcharray(int array[], int size, int whatIWannaFind) {
    for(int i = 0; i < size; i++){
        if(array[i] == whatIWannaFind) {
            return i;
        }
    }
    return -1;
}