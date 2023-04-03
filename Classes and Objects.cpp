#include<iostream>
#include "student.cpp"
using namespace std;

int main()
{
    //static
    Student s1, s2, s3;

    //dynamic object creation
    Student *s4 = new Student;

    //s1.age = 20;
    s1.setAge(20);
    s1.rollno = 18;

    //for dynamically created objects
    //(*s4).age = 21;
    (*s4).rollno = 23;
    //or
    //s4->age = 21;
    s4->setAge(21);
    s4->rollno = 23;

    s1.display();

    return 0;
}
