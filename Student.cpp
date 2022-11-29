#include "Student.h"
#include <vector>


void Student::load_csv()
{
    cout<<"Entry : load_csv";
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
        temp.hostel=substring[2];
        temp.year=substring[3];
        temp.branch=substring[4];
        temp.leave_date=substring[5];
        temp.leave_time=substring[6];
        temp.return_date=substring[7];
        temp.return_time=substring[8];
        Hostel.push_back(temp);
    }
    file.close();
}

void Student::apply_leave(string irn)
{
    int i=1;
    for(i=1; i<Hostel.size(); i++)
    {
        if(Hostel[i].id==irn)
        {
            cout<<"IRN: "<<Hostel[i].id<<"\n";
            break;
        }
    }
    cout<<"Name: "<<Hostel[i].name<<"\n";
    cout<<"Year: "<<Hostel[i].year<<"\n";
    cout<<"Branch: "<<Hostel[i].branch<<"\n";
    cout<<"Hostel: "<<Hostel[i].hostel<<"\n";
    cout<<"Prv leave:"<<Hostel[i].leave_date<<"\n";
    cout<<"Leave from: ";
    // string temp = "";
    // cin>>temp;
    // cout<<"New leave:"<<temp<<"\n";
    cin>>Hostel[i].leave_date;
    cout<<"Leave time: ";
    cin>>Hostel[i].leave_time;
    cout<<"Return date: ";
    cin>>Hostel[i].return_date;
    cout<<"Return time: ";
    cin>>Hostel[i].return_time;

    update_csv();
}

void Student::update_csv()
{
    string line, word;
    ofstream file("student.csv");

    file<<"IRN,Name,Hostel,Year,Branch,Leave Date,Leave Time,Return Date,Return Time\n";
    int i=1;
    for(i=1; i<Hostel.size(); i++)
    {
        file<<Hostel[i].id<<","<<Hostel[i].name<<","<<Hostel[i].hostel<<","<<Hostel[i].year<<","<<Hostel[i].branch<<","<<Hostel[i].leave_date<<","<<Hostel[i].leave_time<<","<<Hostel[i].return_date<<","<<Hostel[i].return_time<<"\n";
    }
}

void Student:: print_data()
{
    for(int i=0; i<Hostel.size(); i++)
    {
        cout<<Hostel[i].id<<"\n";
    }
}

