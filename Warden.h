#include "User.h"
#include <vector>


class Warden:public User
{
    private:
        vector<Warden>Wardens;
        friend class Student;
    public:
        void approve_leave(Student);

        void load_csv();

        
};