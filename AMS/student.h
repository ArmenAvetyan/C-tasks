#include <stdbool.h>
#ifndef STUDENT_H
#define STUDENT_H
#define SIZE 30

typedef enum {
    CPP = 1,
    WEB,
    AI,
    DevHack
}Language;

typedef enum {
    COMPUTER_SCIENCE = 1,
    CORE_LANGUAGE,
    SPECIALTIES
}Phase;

typedef struct {
    char name[SIZE];
    unsigned int ID;
    Language language;
    Phase phase;
    int monthExams[3];
    float totalScore;
    bool passed;
}Student;

void addStudent (Student* s);
void inputMonthlyExam (Student* s);
void calculateTotal (Student* s);
void checkPassed (Student* s);
void printStudentReport (Student* s);
int minScoreForThirdMonth(int month[]);
void print_minScore ();
void passedStudents(Student s[], int size);

#endif
