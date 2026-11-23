#include <stdio.h>
#include "student.h"

int main() {
    struct Student s;

    addStudent(&s);
    displayStudent(s);
    calculateMarks(s);
    checkResult(s);

    return 0;
}
