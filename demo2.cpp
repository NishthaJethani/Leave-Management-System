#include <iostream>
#include "Student.h"
#include "Student.cpp"
#include "Warden.h"
#include "Warden.cpp"
using namespace std;

int main()
{
    cout<<"Entry : main()";
    string irn;
    Student s;
    Warden w;
    cout<<"Obje Studenut created";
    s.load_csv();
    cin>>irn;
    s.apply_leave(irn);

    w.approve_leave(s);
}