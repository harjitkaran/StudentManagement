#ifndef STUDENT_H
#define STUDENT_H

struct Student {
    int roll;
    char name[50];
    float marks[3];
};

void addStudent(struct Student *s);
void displayStudent(struct Student s);
void calculateMarks(struct Student s);
void checkResult(struct Student s);

#endif
