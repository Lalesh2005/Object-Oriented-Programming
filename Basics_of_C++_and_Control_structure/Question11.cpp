// An election is contested by five candidates. The candidates are numbered 1 to 5 and
// the voting is done by marking the candidate number on the ballot paper. Write a
// program to read the ballots and count the votes cast for each candidate using an array
// variable count. In case, a number read is outside the range 1 to 5, the ballot should be
// considered as a ‘spoilt ballot’, and the program should also count the number of spoilt
// ballots.

#include <iostream>
using namespace std;
int main()
{
    int arr[6]={0};
    int waste;
    char x='y';
    while(x=='y')
    {
        int z;
        cout<<"Enter 1 to 5 to vote from candidates 1 to 5:";
        cin>>z;
        arr[z]=arr[z]+1;
        if (z<1 || z>5)
        {
            arr[0]=arr[0]+1;
        }
        
        cout<<"want to continue to vote press y else any key: ";
        cin>>x;        
    }
    for(int i=0; i<6;i++)
    {
        if (i==0)
        {
            cout<<"spoilt ballot is"<<arr[0]<<endl;
            continue;
        }
        cout<<"Candidate number "<<i<<"got "<<arr[i]<<"votes"<<endl;
    }
    return 0;
}