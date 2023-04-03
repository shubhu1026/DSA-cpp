#include <iostream>

class Student
{
    int age;
public:
    int rollno;

    void display()
    {
        std::cout << age << " " << rollno << std::endl;
    }

    int getAge()
    {
        return age;
    }

    void setAge(int n)
    {
        age = n;
    }
};
