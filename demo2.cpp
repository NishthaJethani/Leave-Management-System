#include <iostream>
#include "Student.h"
using namespace std;

int main()
{
    string irn;
    Student s;
    s.load_csv();
    s.print_data();
    s.apply_leave("CT2145");
}