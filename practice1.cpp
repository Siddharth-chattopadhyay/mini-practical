#include <iostream>
using namespace std;

int main(){
    int userScore;
    cout << "Enter your score: ";
    cin >> userScore;
    
    char grade = 
        (userScore >= 90
            ? 'A'
            : (userScore >= 80)
                ? 'B'
                : (userScore >= 70)
                    ? 'C'
                    : (userScore >= 60)
                        ? 'D'
                        : 'F');

    cout << "Your grade is " << grade << endl;
        switch (grade) {
            case 'A':
                cout << "Excellent work!" << endl;
                break;
            case 'B':
                cout << "Well done" << endl;
                break;
            case 'C':
                cout << "Good job" << endl;
                break;
            case 'D':
                cout << "You passed, but you could do better" << endl;
                break;
            default:
                cout << "Sorry, you failed" << endl;
                break;
        }

        if (grade == 'F'){
            cout << "Sorry, try again next time" << endl;
        }
        else{
            cout << "Congratulations! You are eligible for the next level" << endl;
        }

    return 0;
}