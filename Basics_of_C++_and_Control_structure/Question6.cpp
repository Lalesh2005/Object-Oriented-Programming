// WAP to demonstrate for, while, do-while (with all possible variations), like for loop
// can be demonstrated without giving initialization in for construct or without giving
// increment in for construct.
// Sample:
// for (int i=0; i<10; i++)
// i=0
// for (; i<10; i++)
// i=0
// for (; i<10;)
// i++


#include<iostream>
using namespace std;
int main()
{

    // Use of for Loop
    for(int i=0;i<5;i++)
    {
        cout<<i<<endl;
    }


    // Use of while Loop
    int i=0;
    while(i<6)
    {
        cout<<i<<endl;
        i++;
    }

    // Use of d0-while
    int j=0;
    do
    {
        cout<<j<<endl;
        j++;
    } while (j<6);
    
    return 0;
}