#include <stdio.h>
#include "student.h"

void calculateMarks(struct Student s) {
    int i;
    float total = 0, average;

    for(i = 0; i < 3; i++) {
        total += s.marks[i];
    }

    average = total / 3;

    printf("\nTotal Marks: %.2f", total);
    printf("\nAverage Marks: %.2f\n", average);
}

void checkResult(struct Student s) {
    int i, pass = 1;

    for(i = 0; i < 3; i++) {
        if(s.marks[i] < 35) {
            pass = 0;
        }
    }

    if(pass)
        printf("\nResult: PASS\n");
    else
        printf("\nResult: FAIL\n");
}
