// WAP to calculate gross salary of a person, where gross_salary = basic+da+ta+HRA and
// da is 46% of basic and ta is 8% of basic and HRA is 9% of basic pay.

#include<iostream>
using namespace std;
int main()
{
    float basic_sal;
    cout<<"Enter your basic salary: ";
    cin>>basic_sal;
    float da=(0.46)*basic_sal;
    float ta=(0.08)*basic_sal;
    float HRA=(0.09)*basic_sal;

    cout<<"Gross salary is: "<<basic_sal+da+ta+HRA<<endl;
    return 0;
}