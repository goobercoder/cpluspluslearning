#include <iostream>
#include <string>



using std::cout;
using std::cin;
using std::endl;
using std::string;

void swap(string &x, string &y);
void show(string x, string y);

int main() {
    string hello2 = "world";
    char grade = 'F';
    int gooberLevel = 1000000;

    cout << &hello2 << ' ';
    cout << &grade << ' ';    
    cout << &gooberLevel << ' ' << endl;    



    //you can use memory adresses to directly influence variables in functions
    //memory adresses point to where the data of the variable is
    //thus changing something where the adress is changes the data of the variable
    
    string hello = "hello";
    string world = "world";

    //this function makes copies of the variables and shows them
    show(hello, world);

    //this function uses memory adresses thus it can directly influence variables
    swap(hello, world);

    show(hello, world);

    //the memory adresses can also be "in a variable" of sorts.
    string name = "goober";
    string *pName = &name;

    cout << "name contents: " << name << " name adress: " << &name << " pointer contents:" << pName << " pointer dereferenced: " << *pName << endl;

    return 0;
}

void show(string x, string y) {
    cout << "hello: " << x << endl;
    cout << "world: " << y << endl;
}

void swap(string &x, string &y) {
    string temp;
    temp = x;
    x = y;
    y = temp;
}