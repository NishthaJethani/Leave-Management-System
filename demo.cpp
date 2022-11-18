#include <iostream>
#include <fstream>
using namespace std;

class Student
{
    private:
        string irn, name, branch, year, hostel, leave, leave_time, returning, return_time, guardian, guardian_contact, guardian_address;
    public:
        void apply(string);
        void update();

};

void Student:: apply(string irn)
{
    cout<<"IRN: "<<irn;
    cout<<"Name: "; cin>>name;
    cout<<"Hostel"; cin>>hostel;
    cout<<"Year: "; cin>>year;
    cout<<"Branch: "; cin>>branch;
    cout<<"Leave date and time: "; cin>>leave>>leave_time;
    cout<<"Return date: "; cin>>returning>>return_time;
    cout<<"Person to be visited: "; cin>>guardian;
    cout<<"Phone Number: "; cin>>guardian_contact;
    cout<<"Address: ";cin>>guardian_address;
    
}

int main()
{
    int user, action;
    string irn;
    ofstream outf;
    outf.open("student.txt", ios::app);
    do
    {
        cout<<"\n1. Student\n2. Warden\n3. Security\n";
        cin>>user;
        switch(user)
        {
            case 1:
                Student s;
                cout<<"Enter IRN: ";
                cin>>irn;
                outf<<irn;
                cout<<"\n1. Apply for leave\n2. Update leave application\n";
                cin>>action;
                switch(action)
                {
                    case 1:
                        s.apply(irn);
                        break;
                }
        }
    } while (user!=4);
    
}
