#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Person.h"

class Instructor : public Person {
private:
    string department;
    int experienceYears;

public:
    Instructor() : Person() {
        department = "";
        experienceYears = 0;
    }

    Instructor(string n, int i, string d, int e) : Person(n, i) {
        department = d;
        experienceYears = e;
    }

    ~Instructor() {}

    void setDepartment(string d) {
        department = d;
    }

    void setExperienceYears(int e) {
        experienceYears = e;
    }

    string getDepartment() {
        return department;
    }

    int getExperienceYears() {
        return experienceYears;
    }

    void display() {
        cout << "\nInstructor Info:" << endl;
        Person::display();
        cout << "Department: " << department << endl;
        cout << "Experience: " << experienceYears << " years" << endl;
    }
};

#endif
