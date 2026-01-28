 
// #include <iostream>
// #include <cmath>
// using namespace std;

// int fact(int x) {
//     int pro = 1;
//     for (int i = 1; i <= x; i++) {
//         pro = pro * i;
//     }
//     return pro;
// }

// int main() {
//     double pi = acos(-1.0);
//     float n;
//     cout << "Enter angle in degree: ";
//     cin >> n;

//     float rad = (pi * n) / 180;   // radians
//     float x = rad;                // keep original angle
//     float sum = 0;
//     int s = 1;                    // sign
//     int m = 1;                    // denominator (factorial index)
//     float term = 0;

//     // Taylor expansion sin(x) ≈ x - x^3/3! + x^5/5! - ...
//     for (int i = 1; i <= 7; i++) {
//         // power = x^(2i-1)
//         float power = 1;
//         for (int j = 1; j <= m; j++) {
//             power *= x;
//         }

//         term = (s * power) / fact(m);
//         sum += term;

//         // update for next term
//         m += 2;       // increase denominator (odd factorial)
//         s *= -1;      // alternate sign
//     }

//     cout << "sin(" << n << "°) ≈ " << sum << endl;
//     cout << "Actual sin(" << n << "°) = " << sin(rad) << endl;

//     return 0;
// }

// cos angle 

// #include <iostream>
// #include <cmath>
// using namespace std;

// int fact(int x) {
//     int pro = 1;
//     for (int i = 1; i <= x; i++) {
//         pro = pro * i;
//     }
//     return pro;
// }

// int main() {
//     double pi = acos(-1.0);
//     float n;
//     cout << "Enter angle in degree: ";
//     cin >> n;

//     float rad = (pi * n) / 180;   // radians
//     float x = rad;                // keep original angle
//     float sum = 0;
//     int s = 1;                    // sign
//     int m = 0;                    // factorial index (start with 0 for cos)
//     float term = 0;

//     // Taylor expansion cos(x) ≈ 1 - x^2/2! + x^4/4! - ...
//     for (int i = 1; i <= 7; i++) {
//         // power = x^(m)
//         float power = 1;
//         for (int j = 1; j <= m; j++) {
//             power *= x;
//         }

//         term = (s * power) / fact(m);
//         sum += term;

//         // update for next term
//         m += 2;       // increase denominator (even factorials)
//         s *= -1;      // alternate sign
//     }

//     cout << "cos(" << n << "°) ≈ " << sum << endl;
//     cout << "Actual cos(" << n << "°) = " << cos(rad) << endl;

//     return 0;
// }

// b question

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double denom = 1; // to calculate i^i
        for (int j = 1; j <= i; j++) {
            denom *= i;
        }

        double term = 1.0 / denom; // (1/i)^i
        sum += term;
    }

    cout << "SUM of series = " << sum << endl;
    return 0;
}
