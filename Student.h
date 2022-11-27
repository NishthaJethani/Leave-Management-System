#include <iostream>
#include <vector>
#include "User.h"
using namespace std;

class Student:public User
{
    private:
        string year, branch, hostel;
        vector <Student> Hostel;
    public:
        void apply_leave(string);
        void load_csv();
        void print_data();
};

void Student::load_csv()
{
    string line, word;
    ifstream file("student.csv");
    while(getline(file, line))
    {
        stringstream str(line);
        vector<string>substring;
        while(getline(str, word, ','))
        {
            substring.push_back(word);
        }
        Student temp;
        temp.id=substring[0];
        temp.name=substring[1];
        temp.year=substring[2];
        temp.branch=substring[3];
        temp.hostel=substring[4];
        Hostel.push_back(temp);
    }
}

void Student::apply_leave(string irn)
{
    int i=0;
    for(i=0; i<Hostel.size(); i++)
    {
        cout<<Hostel[i].id;
    }
    
}

void Student:: print_data()
{
    for(int i=0; i<Hostel.size(); i++)
    {
        cout<<Hostel[i].id;
    }
}

