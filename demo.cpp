#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include<sstream>
using namespace std;

void csv_to_vector()
{
    string line, word;
    vector<vector<string>>Hostel;
    vector<string>Student;

    ifstream inf;
    inf.open("student.csv");

    while(getline(inf, line))
    {
        Student.clear();
        stringstream str(line);

        while(getline(inf, word, ','))
            Student.push_back(word);
        Hostel.push_back(Student);

    }
    int i=1;
    int j=0;
    cout<<Hostel[i][j]<<" ";
    for(int i=0; (i<Hostel.size()); i++)
    {
        for(int j=0; (j<Hostel[i].size()); j++)
        {
            cout<<Hostel[i][j]<<" ";
        }
        cout<<"\n";
    }
    
}

class Student
{
    private:
        string irn, name, branch, year, hostel, leave, leave_time, returning, return_time, guardian, guardian_contact, guardian_address;
        vector<vector<string>>Hostel;
        vector<string>Student;
    public:
        void apply(string);
        void update();
        int fetchStudent(string);

};

//int Student:: fetchStudent(string irn)
//{
    /*string line, word;
   

    ifstream inf;
    inf.open("student.csv");

    while(getline(inf, line))
    {
        Student.clear();
        stringstream str(line);

        while(getline(inf, word, ','))
            Student.push_back(word);
        Hostel.push_back(Student);

    }*/
    
    /*for (int i=0; i<Hostel.size(); i++)
    {
        if (Hostel[i][0]==irn)
        {
            return i;
        }
    }*/
//}

void Student:: apply(string irn)
{
    string line, word;
   

    ifstream file("student.csv");

    while(getline(file, line))
    {
        Student.clear();
        stringstream str(line);

        while(getline(file, word, ','))
            Student.push_back(word);
        Hostel.push_back(Student);

    }
    int i;
    for (i=0; i<Hostel.size(); i++)
    {
        if (Hostel[i][0]==irn)
        {
            cout<<"IRN: "<<Hostel[i][0];
            break;
        }
        else{
            i=-1;
        }
    }

    if (i==-1)
    {
        cout<<"Student not found.";
    }
    else
    {
    cout<<"\nIRN: "<<Hostel[i][0];
    cout<<"\nName: "<<Hostel[i][1];
    //ofstream outf;
    //outf.open("student.csv", ios::app);
    cout<<"\nHostel: "<<Hostel[i][2];
    //outf<<hostel<<",";
    cout<<"\nYear: "<<Hostel[i][3]; 
    //outf<<year<<","
    cout<<"\nBranch: "<<Hostel[i][4];
    //outf<<branch<<"\n";
    //outf.close();
    cout<<"Leave date and time: "; cin.ignore(); getline(cin, leave);
    cout<<"Return date: "; cin>>returning>>return_time;
    cout<<"Person to be visited: "; cin.ignore(); getline(cin, guardian);
    cout<<"Phone Number: "; cin>>guardian_contact;
    cout<<"Address: ";cin.ignore(); getline(cin, guardian_address);
    }
}

int main()
{
    int user, action;
    string irn;
    csv_to_vector();
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
