#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>

class student
{
    private:
        std::string firstName;
        std::string lastName;
    public:
        void setName(string, string);
};

void setName(std::string first, std::string last)
{
    student.firstName = first;
    student.lastName = last;
}


#endif
