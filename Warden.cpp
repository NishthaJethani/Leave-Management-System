#include "Warden.h"
#include "Student.h"


void Warden::load_csv()
{
    string line, word;
    ifstream file("Warden.csv");
    while(getline(file, line))
    {
        stringstream str(line);
        vector<string>substring;
        while(getline(str, word, ','))
        {
            substring.push_back(word);
        }
        Warden temp;
        temp.id=substring[0];
        temp.name=substring[1];
        Wardens.push_back(temp);
    }
    file.close();
}

void Warden::approve_leave(Student s)
{
    int i=1;
    
    for(i=1; i<s.Hostel.size(); i++)
    {
        if(s.Hostel[i].leave_approved==0)
        {
            cout<<s.Hostel[i].id<<"\t"<<s.Hostel[i].name<<"\t"<<s.Hostel[i].year<<"\t"<<s.Hostel[i].branch<<"\t"<<s.Hostel[i].hostel<<"\t"<<s.Hostel[i].leave_date<<"\t"<<s.Hostel[i].leave_time<<"\t"<<s.Hostel[i].return_date<<"\t"<<s.Hostel[i].return_time<<"\t"<<s.Hostel[i].leave_approved<<"\n";
        }
    }
}
