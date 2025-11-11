#ifndef COURSE_H
#define COURSE_H

#include "Instructor.h"
#include "Student.h"

class Course {
private:
    string courseCode;
    string courseName;
    int maxStudents;
    Student* students;
    int currentStudents;
    Instructor instructor;

public:
    Course() {
        courseCode = "";
        courseName = "";
        maxStudents = 0;
        students = nullptr;
        currentStudents = 0;
    }

    Course(string code, string name, int max, Instructor instr) {
        courseCode = code;
        courseName = name;
        maxStudents = max;
        instructor = instr;
        currentStudents = 0;
        students = new Student[maxStudents];
    }

    ~Course() {
        delete[] students;
    }

    void addStudent(Student s) {
        if (currentStudents < maxStudents) {
            students[currentStudents] = s;
            currentStudents++;
        } else {
            cout << "Course is full" << endl;
        }
    }

    void displayCourseInfo() {
        cout << "\nCourse: " << courseCode << " - " << courseName << endl;
        cout << "Max Students: " << maxStudents << endl;
        cout << "Currently Enrolled: " << currentStudents << endl;
        instructor.display();

        for (int i = 0; i < currentStudents; i++) {
            students[i].display();
        }
}
};

#endif
