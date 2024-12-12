#include <iostream>

void sort(int array[], int size);
void showarray(int array[], int size);

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    //making a bubble sort
    int array[] = {1, 10, 9, 6, 4, 2, 5, 8};
    int size = sizeof(array) / sizeof(array[0]);
    cout << "before sort: ";
    showarray(array, size);
    sort(array, size);
    cout << endl << "after sort: ";
    showarray(array, size);



    return 0;
}

void sort(int array[], int size) {
    int temp;

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp; 
            }
        }
    }
}

void showarray(int array[], int size) {
    for(int i = 0; i < size; i++) {
        cout << array[i] << ' ';
    }
}