#include <iostream>
using namespace std;

int main () {
    double finalGrade;
    cout << "Enter your score: ";
    cin >> finalGrade;

bool goodBehavior;
cout << "Is he/she well-behaved? ";
cin >> goodBehavior;

bool goodStudent = finalGrade >= 9 && goodBehavior; // relational operators
bool averageStudent = (finalGrade >= 9) ^ goodBehavior;
bool badStudent = finalGrade <= 3 && !goodBehavior;
bool loanCancelled = finalGrade <= 3 || !goodBehavior;

cout << "Good student? " << goodStudent << endl;
cout << "Average student? " << averageStudent << endl;
cout << "Bad Student? " << badStudent << endl;

// loan validaton
cout << "will the loan be cancelled? " << loanCancelled << endl;

return 0;
}