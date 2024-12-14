#include <iostream>

namespace true_stuff{
    std::string best_word = "goober";
}

namespace false_stuff{
    std::string best_word = "dog";
}

int main(){
    using std::cout;

    cout << true_stuff::best_word << '\n';

    using namespace false_stuff;
    cout << best_word << '\n';

    return 0;  
}