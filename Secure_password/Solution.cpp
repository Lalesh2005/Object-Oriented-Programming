#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string password;
    cout << "Enter the password: ";
    cin >> password;

    int length = password.length();

    int Upper = 0, Lower = 0, special = 0, digit = 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) {
            Upper++;
        }
        else if (islower(password[i])) {
            Lower++;
        }
        else if (isdigit(password[i])) {
            digit++;
        }
        else if (ispunct(password[i])) {
            special++;
        }
    }

    int arr[4] = {Upper, Lower, special, digit};
    int count = 0;

    for (int j = 0; j < 4; j++) {
        if (arr[j] == 0) {
            count++;
        }
    }

    if ((length < 6) || (count == 3)) {
        cout << "Weak Password";
    }
    else if (((length >= 6) && (length < 8)) || (count == 2)) {
        cout << "Moderate Password";
    }
    else if ((length >= 8) && (count == 0)) {
        cout << "Strong Password";
    }
    
    return 0;
}