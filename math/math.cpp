#include <iostream>
#include <cmath>


int main() {
    // making variable
    int number_of_goobers = 100;
    
    // math operations
    // adding
    number_of_goobers = number_of_goobers + 1; // add 1 to number of goobers
    number_of_goobers += 1; // smaller (i like)
    number_of_goobers++; // adds only ane always but very smol
    
    // subtracting 
    number_of_goobers = number_of_goobers - 1; // remove 1 to number of goobers
    number_of_goobers -= 1; // smaller (i like)
    number_of_goobers--; // removes only ane always but very smol

    // multiplication
    number_of_goobers *= 2; // doubles goobers (yay)

    // division
    number_of_goobers /= 2; // divides goobers :(

    // if something is left over from multiplication
    int remaining = number_of_goobers % 33;

    using std::cout;
    cout << number_of_goobers << '\n';
    cout << remaining << '\n';

    double x = 3;
    double y = 4;
    double z;
    double s;
    double powe;
    int x_rounded;

    z = std::max(x, y);
    s = std::min(x, y);
    powe = pow(x,y);
    x_rounded = round(x); //also floor and ceil

    cout << z;
    cout << '\n';
    cout << s;
    
    return 0;
}