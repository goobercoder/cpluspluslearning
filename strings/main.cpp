#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

int main() {
    std::string funnysting;

    cout << "whats on your mind?: ";

    //for multiple words use getline (you need to #include <string>)
    std::getline(std::cin, funnysting);

    cout << endl;

    //how long is a string
    funnysting.length() > 100 ? cout << endl << "wow, you have a lot on your mind!" << endl : cout;

    cout << endl << funnysting.length() << " characters is how long your string is." << endl;

    //if the sting is nothing
    if(funnysting.empty()) {
        cout << endl << "wow, how boring that you said nothing .-." << endl;
    }

    /*
    the clear method clears the sting.
    funnystring.clear()
    */

   //.append adds something to the end of the string.
    funnysting.append(". THESE ARE YOUR OWN WORDS");
    cout << endl << funnysting << endl;

    //the .at method returst the character at the position
    cout << endl << "the first charachrer of your string was: " << funnysting.at(0) << endl;

    //the .insert method addst aomething at the given position. 
    funnysting.insert(5, "this was the fifth charactes place.");
    cout << endl << funnysting << endl;

    /*
    .find returns a position if it finds what is searches for.
    if it finds nothing is prints the last character.
    */ 
    cout << endl << funnysting.find("h") << endl;

    //. erase erases the area you input.
    funnysting.erase(5, 7);
    cout << endl << funnysting << endl;

    return 0;
}
