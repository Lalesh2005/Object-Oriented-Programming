// Implement namespace in a program to illustrate the use of same name variables and
// functions in different sections/libraries of the code.

// Nested namespace

#include <iostream>
using namespace std;
namespace nsi
{
    namespace nsi1
    {
        int y=10;
    
    }
}

namespace ns2
{
    int fun()
    {
        int l = 12;
        return l;
    }
}

using namespace nsi;
int main()
{
    cout<<nsi::nsi1::y<<endl;
    cout << ns2::fun();
    return 0;
}

// function 

// #include <iostream>
// using namespace std;

// namespace ns2
// {
//     int fun()
//     {
//         int l = 12;
//         return l;
//     }
// }

// using namespace ns2;

// int main()
// {
//     cout << ns2::fun();
//     return 0;
// }


