// Write a C++ program that will ask for a temperature in Celsius and display it in
// degree Fahrenheit.[F=9C/5+32]

#include<iostream>
using namespace std;
int main()
{
    int c;
    cout<<"Enter the temperature in celsius: ";
    cin>>c;
    int f=((9/5)*c)+32;
    cout<<"Temperature in farenhite is: "<<f<<endl;
    return 0;
}