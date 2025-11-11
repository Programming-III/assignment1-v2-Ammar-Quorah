#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int yearLevel;
    string major;

public:
    Student() : Person() {
        yearLevel = 0;
        major = "";
    }

    Student(string n, int i, int y, string m) : Person(n, i) {
        yearLevel = y;
        major = m;
    }

    ~Student() {}

    void setYearLevel(int y) {
        yearLevel = y;
    }

    void setMajor(string m) {
        major = m;
    }

    int getYearLevel() {
        return yearLevel;
    }

    string getMajor() {
        return major;
    }

    void display() {
        cout << "\nStudent Info:" << endl;
        Person::display();
        cout << "Year: " << yearLevel << endl;
        cout << "Major: " << major << endl;
    }
};

#endif
