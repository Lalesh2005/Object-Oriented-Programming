// A certain grade of steel is graded according to the following conditions:
// (i) Hardness must be greater than 50
// (ii) Carbon content must be less than 0.7
// (iii) Tensile strength must be greater than 5600
// The grades are as follows:
// Grade is 10 if all three conditions are met
// Grade is 9 if all conditions (i) and (ii) are met
// Grade is 8 if all conditions (ii) and (iii) are met
// Grade is 7 if all conditions (i) and (iii) are met
// Grade is 6 if only one condition is met
// Grade is 5 if none of the conditions are met
// Write a program, which will require the user to give values of hardness,
// carbon content and tensile strength of the steel under consideration and
// output the grade of the steel. (Solve using nested if-else, ladder if and else
// if)

#include <iostream>
using namespace std;

int main() {
    float Hardness, Tensile_stre, carbon_cont;

    cout << "Enter the Hardness: ";
    cin >> Hardness;
    cout << "Enter the Tensile Strength: ";
    cin >> Tensile_stre;
    cout << "Enter the carbon content: ";
    cin >> carbon_cont;

    bool c1 = (Hardness > 50);
    bool c2 = (carbon_cont < 0.7);
    bool c3 = (Tensile_stre > 5600);

    if (c1 && c2 && c3) {
        cout << "Grade 10";
    }
    else if (c1 && c2) {
        cout << "Grade 9";
    }
    else if (c2 && c3) {
        cout << "Grade 8";
    }
    else if (c1 && c3) {
        cout << "Grade 7";
    }
    else if (c1 || c2 || c3) {   // exactly one condition
        cout << "Grade 6";
    }
    else {
        cout << "Grade 5";
    }

    return 0;
}