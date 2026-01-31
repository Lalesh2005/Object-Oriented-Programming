#include<iostream>
using namespace std;

class tollBooth
{
    private:
    unsigned int totalNumber;
    double total_amount;

    public:

    tollBooth()
    {
        totalNumber=0;
        total_amount=0;
    }
    void payingCar()
    {
        totalNumber++;
        total_amount=total_amount+0.5;
    }
    void noPayingCar()
    {
        totalNumber++;
    }

    void display()
    {
        cout<<"Total Number of the car is: "<<totalNumber<<endl;
        cout<<"Total amount of cash is: "<<total_amount<<endl;
        cout<<"______________________________________________"<<endl;
    }
};
int main()
{
    tollBooth t1;
    char c;
    cin>>c;
    while((int)c != 27)
    {
        
        if(c=='p')
        {
            t1.payingCar();

        }
        else if(c=='c')
        {
            t1.noPayingCar();
        }

        cout<<"press 'p' for the paying car, 'n' for the non paying car and esc for exit: "<<endl;
        cin>>c;
    }
    t1.display();
    return 0;
}