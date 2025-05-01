#include <iostream>
#include "Date.cpp"
#include <cstring>

class Student
{
    int rno;
    char name[20];
    Date dateOfBirth;
    Date dateOfAdmission;

public:
    Student();
    Student(int rno, char *name, int dd, int mm, int yy, int dd1, int mm1, int yy1);
    void display();
};
Student::Student()
{
    rno = 0;
    strcpy(name, "NA");
}
Student::Student(int rno, char *name, int dd, int mm, int yy, int dd1, int mm1, int yy1) : dateOfBirth(dd, mm, yy), dateOfAdmission(dd1, mm1, yy1)
{
    this->rno = rno;
    strcpy(this->name, name);
}
void Student::display()
{
    cout << this->rno << " " << this->name<<" ";
    dateOfBirth.show();
    dateOfAdmission.show();
}

int main()
{
    int size = 5;
    Student *s = new Student[size];

    for (int i = 0; i < size; i++)
    {
        int rno, dd, mm, yy, dd1, mm1, yy1;
        char name[20];

        cout << "\nEnter details for Student " << (i + 1) << ":\n";
        cout << "Roll Number: ";
        cin >> rno;
        cout << "Name: ";
        cin >> name;
        cout << "Enter DOB (dd mm yy): ";
        cin >> dd >> mm >> yy;
        cout << "Enter Admission Date (dd mm yy): ";
        cin >> dd1 >> mm1 >> yy1;

        s[i] = Student(rno, name, dd, mm, yy, dd1, mm1, yy1);
    }

    for (int i = 0; i < size; i++)
    {
        s[i].display();
    }

    delete[] s;
}