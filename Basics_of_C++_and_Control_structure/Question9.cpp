// Differentiate between private and public access/scope. Perform the question no. 5
// with structure having the data member in private scope. Students should be able to
// a) differentiate between structure in C vs structure in C++


#include <iostream>
using namespace std;

struct fees {
private:
    int day;
    float fine;

public:
    void dayEnter(int x) {
        day = x;   // assign day
    }

    void fineAmount() {
        if (day <= 5 && day > 0) {
            fine = 0.5*day;
            cout << "Fine is: " << fine << endl;
        } 
        else if (day > 5 && day <= 10) {
            fine = 1*day;
            cout << "Fine is: " << fine << endl;
        } 
        else if (day > 10 && day < 30) {
            fine = 5*day;
            cout << "Fine is: " << fine << endl;
        } 
        else {
            cout << "Your membership is cancelled" << endl;
            fine = 0; // to avoid garbage
        }
    }

    void display() {
        cout << "Final fine stored is: " << fine << endl;
    }
};

int main() {
    fees s1;
    int a;
    cout<<"Enter the numer of days: ";
    cin>>a;
    s1.dayEnter(a);   // passing no. of days late
    s1.fineAmount();   // calculate fine
    s1.display();      // display fine
    return 0;
}