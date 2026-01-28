// Create a structure in C++ containing the details of Students as details below and a
// main function to execute the structure.

// Data Members(properties):
// Name
// Roll No
// Degree
// Hostel
// CurrentCGPA

// Member Function(behavior):
// addDetails();
// updateDetails();
// updateCGPA();
// updateResidenceInfo();
// displaydetails();

#include<iostream>
#include<string>
using namespace std;
struct student
{
    private:
    string name;
    int roll_num;
    string deg;
    string hostel;
    float cgpa;

    public:
    void updateCgpa(float x)
    {
        cgpa=x;
    
    }
    void addDetails(string nam,int roll,string de,string host,float cg)
    {
        name=nam;
        roll_num=roll;
        deg=de;
        hostel=host;
        cgpa=cg;
    
    }
    void displaydetails()
    {
        cout<<name<<" "<<roll_num<<" "<<deg<<" "<<hostel<<" "<<cgpa;
    }
    void updateResidenceInfo(string resi)
    {
        hostel=resi;
    }
    void updateName(string n)
    {
        name=n;
    }
    void updateroll(int r)
    {
        roll_num=r;
    }
    void updateDegree(string d)
    {
        deg=d;
    }
    void updateDetails()
    {
        int p;
        cout<<"Want to update name press 1. Roll No press 2. Degree press 3. Hostel press 4. CurrentCGPA press 5: ";
        cin>>p;
        if (p==4)
        {
            string res;
            cin>>res;
            updateResidenceInfo(res);
        }
        else if(p==1)
        {
            string n;
            cin>>n;
            updateName(n);
        }
        else if(p==2)
        {
            int r;
            cin>>r;
            updateroll(r);
        }
        else if(p==3)
        {
            string d;
            cin>>d;
            updateDegree(d);
        }
        else if(p==5)
        {
            float c;
            cin>>c;
            updateCgpa(c);
        }
        else
        {
            cout<<"Invalid Entry";
        }

        //cout<<"Update";
        
    }
};

int main()
{
    student s1;

    s1.addDetails("lalesh",23,"btech","spm",2.2);
    s1.updateResidenceInfo("bpm");
    s1.updateCgpa(3.3);
    s1.updateDetails();
    s1.displaydetails();
 
    return 0;
}