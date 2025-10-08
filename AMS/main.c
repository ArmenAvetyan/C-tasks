#include <stdio.h>
#include "student.h"

int main () {
    const int n = 2;
    Student st[n];

    for (int i = 0; i < n; ++i) {
        addStudent (&st[i]);
        inputMonthlyExam (&st[i]);
        calculateTotal (&st[i]);
        checkPassed (&st[i]);
        printStudentReport (&st[i]);
    }

    print_minScore ();
    passedStudents(st, n);

    return 0;
}
