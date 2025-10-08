#include <stdio.h>
#include <string.h>
#include "student.h"

void addStudent (Student* s) {
    printf("Enter student name: ");
    scanf(" %[^\n]", s->name);

    printf("Enter student ID: ");
    while (scanf("%u", &s->ID) != 1) {
        printf("Invalid input. Please enter a number: ");
        while (getchar() != '\n');
    }
    printf("\n");

    printf("Enter language track number:\n"
            "1.C++\n"
            "2.WEB\n"
            "3.AI\n"
            "4.DevHack\n");
    while (1) {
        if (scanf("%d", &s->language) != 1 || s->language < 1 || s->language > 4) {
            printf("Invalid input try again: \n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }
    printf("\n");

    printf("Enter phase number:\n"
            "1.COMPUTER SCIENCE\n"
            "2.CORE LANGUAGE\n"
            "3.SPECIALTIES\n");
    while (1) {
        if (scanf("%d", &s->phase) != 1 || s->phase < 1 || s->phase > 3) {
            printf("Invalid input try again: \n");
            while (getchar() != '\n');
            continue;
        }
        break;
    }
    printf("\n");
}

void inputMonthlyExam (Student* s) {
    printf("Enter exam scores (0-100): ");

    for (int i = 0; i < 3; ++i) {
        while (scanf("%d", &s->monthExams[i]) != 1 ||
                s->monthExams[i] < 1 ||
                s->monthExams[i] > 100) {
            printf("Invalid input try again: ");
            
            while (getchar() != '\n');
        }    
        if (i != 2) {
            printf("Enter next score: ");
        }
    }
    printf("\n\n");
}

void calculateTotal (Student* s) {
    s->totalScore = s->monthExams[0] * 0.1 + s->monthExams[1] * 0.1 + s->monthExams[2] * 0.8;
}

void checkPassed (Student* s) {
    s->passed = (s->totalScore >= 80);
}

void printStudentReport (Student* s) {
   printf("Student name: %s\n", s->name);

    printf("ID: %u\n", s->ID);

    printf("Language: ");
    switch (s->language) {
        case 1: printf("C++\n"); break;
        case 2: printf("WEB\n"); break;
        case 3: printf("AI\n"); break;
        case 4: printf("Dev Hack\n"); break;
    }

    printf("Phase: ");
    switch (s->phase) {
        case 1: printf("Computer science\n"); break;
        case 2: printf("Core language\n"); break;
        case 3: printf("Specialties\n"); break;
    }

    printf("Exam scores: ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", s->monthExams[i]);
    }
    printf("\n");

    printf("Total score: %.2f\n", s->totalScore);

    if (s->passed) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
    printf("\n");
}

int minScoreForThirdMonth (int month[]) {
    return (80 - (month[0] + month[1]) * 0.1) / 0.8;
}

void print_minScore () {
    printf("You want to know the minimum score for the 3rd month?\n"
            "1.YES\n"
            "2.NO\n");
    int flag = 0;
    while (scanf("%d", &flag) != 1 || flag > 2 || flag < 1) {
        printf("Invalid input try again: ");
        while (getchar() != '\n');
    }
    
    int months[2] = {0};
    if (flag == 1) {
        printf("Enter first month score: ");
        for (int i = 0; i < 2; ++i) {                                               
            while (scanf("%d", &months[i]) != 1 ||                           
                    months[i] < 1 ||                                         
                    months[i] > 100) {                                       
                printf("Invalid input try again: ");                                

                while (getchar() != '\n');                                          
            }                                                                       
            if (i != 1) {                                                           
                printf("Enter next score: ");                                       
            }                                                                       
        }
        printf("Minimum score required for 3rd month to pass: %d\n", 
                minScoreForThirdMonth (months));
        printf("\n");
    } else {
        printf("\n");
        return;
    }
}

void passedStudents(Student s[], int size) {
    printf("Passed Students:\n");
    int flag = 0;
    for (int i = 0; i < size; ++i) {
        if (s[i].passed) {
            printf("%d.%s\n", i + 1, s[i].name);
            flag = 1;
        }
    }
    if (!flag) {
        printf("All students are failed\n");
    }
}
