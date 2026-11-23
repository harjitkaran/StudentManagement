#include <stdio.h>
#include "student.h"

void addStudent(struct Student *s) {
    int i;

    printf("Enter Roll Number: ");
    scanf("%d", &s->roll);

    printf("Enter Name: ");
    scanf("%49s", s->name);

    for(i = 0; i < 3; i++) {
        printf("Enter marks %d: ", i + 1);
        scanf("%f", &s->marks[i]);
    }
}

void displayStudent(struct Student s) {
    int i;

    printf("\nStudent Details\n");
    printf("Roll Number: %d\n", s.roll);
    printf("Name: %s\n", s.name);

    for(i = 0; i < 3; i++) {
        printf("Subject %d: %.2f\n", i + 1, s.marks[i]);
    }
}
