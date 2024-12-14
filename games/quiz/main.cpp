#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    const string questions[] = {"1. how many teams are there in ssrp?",
                                "2. how many warhammer books are there?",
                                "3. how many hours of time difference are there between finland and germany",
                                "4. how much money have i spent on pet simulator x (i wanna die)",
                                "5. yes"};

    const string choises[][4] = {{"A. 5 teams", "B. 7 teams", "C. 9 teams", "D. 10 teams"},
                                 {"A. 200-300", "B. 300-400", "C. 400-500", "D. 100-200"},
                                 {"A. no difference", "B. 1 hour", "B. 2 hours", "D. 4 hours"},
                                 {"A. too much", "B. way too much", "C. WAY TOO MUCH", "D. i wanna die much"},
                                 {"A. yes", "B. yes", "C. yes", "D. yes"}};

    const char AnswerKey[] = {'D', 'C', 'B', 'D', 'A'};
    int sizeQuestions = sizeof(questions) / sizeof(questions[0]);
    int sizeChoises = sizeof(choises[0]) / sizeof(choises[0][0]);
    char guess;
    int score;

    cout << "******************************" << endl;
    cout << "           Quiz gaem          " << endl;
    cout << "******************************" << endl;

    for(int i = 0; i < sizeQuestions; i++) {
        cout << "******************************" << endl;
        cout << "question #" << i << endl;
        cout << "******************************" << endl;
        for(int j = 0; )
    }
    return 0;
}
