// A library charges a fine for every book return late. For first 5 days the
// fine is 50 paisa, for 6-10 days fine is one rupee and above 10 days fine is
// 5 rupees. If you return the book after 30 days your membership will be
// cancelled. WAP to accept no. of days the member is late to return the
// book and display the fine or appropriate message.

#include<iostream>
using namespace std;
int main()
{
    int day;
    cout<<"Enter the number of days: ";
    cin>>day;
    float fine;
    if(day<=5 && day>0)
    {
        fine=0.5;
        cout<<"fine is :"<<fine;
    }
    else if(day>5 && day<=10)
    {
        fine=1;
        cout<<"fine is :"<<fine;
    }
    else if(day>10 && day<30)
    {
        fine=5;
        cout<<"fine is :"<<fine;
    }
    else
    {
        cout<<"Your membership is cancelled";
    }
    return 0;
}