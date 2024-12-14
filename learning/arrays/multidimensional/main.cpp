#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string gamesAndParentCompanies[][3] = {{"minecraft", "ssrp", "space marine 2"},
                                        {"mojang", "roblox", "saber interactive"},
                                        {"microsoft", "no parent company", "Beacon Interactive"}};
    
    int rows = sizeof(gamesAndParentCompanies)/sizeof(gamesAndParentCompanies[0]);
    int columns = sizeof(gamesAndParentCompanies[0])/sizeof(gamesAndParentCompanies[0][0]);

    cout << "games: ";
    for(int i = 0; i < columns; i++) {
        cout << gamesAndParentCompanies[0][i] << ", ";
    }

    cout << endl << "companies: ";
    for(int i = 0; i < columns; i++) {
        cout << gamesAndParentCompanies[1][i] << ", ";
    }

    cout << endl << "parent companies: ";
    for(int i = 0; i < columns; i++) {
        cout << gamesAndParentCompanies[2][i] << ", ";
    }

    return 0;
}
