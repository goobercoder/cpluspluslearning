#include <iostream>

int main() {
    int garde;
    std::cout << "your grade: ";
    std::cin >> garde;

    //if statements
    if(garde >= 75){
        std::cout << std::endl << "you did great!(if statement)" << std::endl;
    }
    else{
        std::cout << "not perfect(if statement)" << std::endl;
    }

    //switch
    switch (garde)
    {
    case 100:
        std::cout << std::endl << "you did great!(swich)" << std::endl;
        break;
    
    default:
        std::cout << "not perfect(swich)" << std::endl;
        break;
    }

    //tenary
    garde >= 75 ? std::cout << std::endl << "you did great! (teanry)" << std::endl : std::cout << "not perfect(swich)" << std::endl;





    return 0;
}