
#include "User.h"
using namespace std;

class Student:public User
{
    private:
        string year, branch, hostel, leave_date, leave_time, return_date, return_time;
        bool leave_approved;
    public:

        vector <Student> Hostel;


        void apply_leave(string);
        void load_csv();
        void update_csv();
        void print_data();
        
        friend class Warden;
};

