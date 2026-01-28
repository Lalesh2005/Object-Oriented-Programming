// Create a code snippet that illustrates the following:
// a. Calling of private member functions inside public member function
// b. Access private member functions inside public member function


#include<iostream>
using namespace std;

class student
{
    private:
    string name;
    int roll;
    void changeroll(int x)
    {
        roll=x;
    }

    public:
    void change(int y)
    {
        changeroll(y);
    }
    void display()
    {
        cout<<roll;
    }
    
};
int main()
{

    student s1;
    s1.change(44);
    s1.display();

    return 0;
}