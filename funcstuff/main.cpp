#include <iostream>

void Print(std::string toBePrinted, bool isEndl = true); 
//define the function must include type, name and args
// if you want a arg to have a default value, do it here.

int Ispositive(int number);
//you can also have a function return something

//you can also have overloaded functions.
void cake(); // no args
void cake(std::string cakestuff1); // 1 arg
void cake(std::string cakestuff1, std::string cakestuff2); // 2 args


using std::cout;
using std::cin;
using std::endl;

int main() {

    Print("hello world", false); //calls function
    Print("i am alive");

    int num = 10;
    
    cout << Ispositive(num); // prints the return

    cake(); // call the first function with no args
    cake("pepperoni"); // call the second function with 1 arg
    cake("pepperoni", "pizza"); // call the third function with 2 args

    return 0;
}

void Print(std::string toBePrinted, bool isEndl) { //adds function function
    cout << toBePrinted;
    if(isEndl) {
        cout << endl;
    }    
}

int Ispositive(int number) {
    int num = abs(number);
    bool IsPositive;
    if(number != num) {
        IsPositive = false;
    }
    else {
        IsPositive = true;
    }
    return IsPositive;
}

void cake() {
    cout << "here is your plain cake \n";
}

void cake(std::string cakestuff1) {
    cout << "here is your cake with " << cakestuff1 << endl;
}

void cake(std::string cakestuff1, std::string cakestuff2) {
    cout << "here is your cake with " << cakestuff1 << " and " << cakestuff2 << endl;
}