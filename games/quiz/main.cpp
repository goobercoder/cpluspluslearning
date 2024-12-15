#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    const string questions[] = {" how many teams are there in ssrp?",
                                " how many warhammer books are there?",
                                " how many hours of time difference are there between finland and germany",
                                " how much money have i spent on pet simulator x (i wanna die)",
                                " yes"};

    const string choises[][4] = {{"A. 5 teams", "B. 7 teams", "C. 9 teams", "D. 10 teams"},
                                 {"A. 200-300", "B. 300-400", "C. 400-500", "D. 100-200"},
                                 {"A. no difference", "B. 1 hour", "B. 2 hours", "D. 4 hours"},
                                 {"A. too much", "B. way too much", "C. WAY TOO MUCH", "D. i wanna die much"},
                                 {"A. yes", "B. yes", "C. yes", "D. yes"}};

    const char AnswerKey[] = {'D', 'C', 'B', 'D', 'A'};
    int sizeQuestions = sizeof(questions) / sizeof(questions[0]);
    int sizeChoises = sizeof(choises[0]) / sizeof(choises[0][0]);
    char guess;
    int score = 0;

    cout << "******************************" << endl;
    cout << "           Quiz gaem          " << endl;
    cout << "******************************" << endl;

    for(int i = 0; i < sizeQuestions; i++) {
        cout << "******************************" << endl;
        cout << "question #" << i + 1 << questions[i] << endl;
        cout << "******************************" << endl;
        for(int j = 0; j < sizeChoises; j++) {
            cout << choises[i][j] << endl;
        }
        cout << "choise: ";
        cin >> guess;
        guess = toupper(guess);

        if(guess == AnswerKey[i]) {
            cout << "CORRECT!" << endl;
            score++;
        }
        else {
            cout << "WRONG YOU IDIOT!" << endl;
            cout << "the answer was " << AnswerKey[i] << endl;
        }
    }

    cout << "******************************" << endl;
    cout << "you got " << score << " out of " << sizeQuestions << " questions correct." << endl;
    cout << "thus you got " << (score / (double)sizeQuestions)*100 << '%' << endl;
    return 0;
}
