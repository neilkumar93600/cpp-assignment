#include <iostream>
#include <string>
using namespace std;
class student
{
    int age;
    string name, add;

public:
    student()
    {
        name = "unknown";
        age = 0;
        add = "not available";
    }

    setinfo(char nam[20], int ag)
    {
        name = nam;
        age = ag;
        cout << "Details of student is" << endl;
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
    }
