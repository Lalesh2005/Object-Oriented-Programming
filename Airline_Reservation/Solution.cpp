#include <iostream>
using namespace std;

class Ticket
{
    private:
    string passengerName;
    string flightNumber;
    string seatNumber;

    public:
    
    Ticket(string passName,string seatnumb, string flightNumb)
    {
        passengerName=passName;
        seatNumber=seatnumb;
        flightNumber=flightNumb;
    }

    Ticket(const Ticket&obj,string passName,string seatnumb)
    {
        passengerName=passName;
        seatNumber=seatnumb;
        display();
    }

    void display()
    {
        cout<<"Name of the passanger is:"<<passengerName<<endl;
        cout<<"Seat Number is: "<<seatNumber<<endl;
        cout<<"Flight Number is: "<<flightNumber<<endl;
        cout<<"_______________________________________________"<<endl;
    }

    ~Ticket()
    {
        cout<<"Ticket object"<<seatNumber<<"is destroyed."<<endl;
    }

};
int main()
{
    Ticket t1("lalesh","123","Ada123");
    t1.display();
    Ticket t2(t1,"ram","21");
    return 0;
}