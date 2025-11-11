#include <iostream>
#include "Course.h"
using namespace std;

int main() {
    Instructor inst("Dr. Lina Khaled", 1001, "Computer Science", 5);
    Course course("CS101", "Introduction to Programming", 3, inst);

    Student s1("Omar Nabil", 2202, 2, "Informatics");

    course.addStudent(s1);
    course.displayCourseInfo();

    return 0;
}
