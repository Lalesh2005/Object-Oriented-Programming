// An electricity board charges the following rates to domestic users to discourage large
// consumption of energy:
// For the first 100 units 60P per unit
// For next 200 units 80P per unit
// Beyond 300 units 90P per unit
// All users are charged a minimum of Rs. 50.00. If the total amount is more than Rs.
// 300.00 then an additional surcharge of 15% is added. Write a program to read the
// names of users and number of units consumed and print out the charges with names.

#include<iostream>
using namespace std;
int main()
{
    string name;
    cout<<"Enter your name: ";
    cin>>name;
    float unit;
    cout<<"Enter the number of unit consumed: ";
    cin>>unit;
    float charge;
    if (unit<=100 && unit>0)
    {
        charge=unit*0.6;
    }
    else if(unit>100 && unit<200)
    {
        charge=100*0.6;
        charge=charge + (unit-100)*0.8;
    }
    else
    {
        charge=unit*0.9;
    }

    if(charge>300)
    {
        charge=charge+50;
        float temp=0.15*charge;
        charge=temp+charge;
    }

    cout<<name<<" "<<"has to pay "<<charge<<" "<<"amount";
    return 0;
}