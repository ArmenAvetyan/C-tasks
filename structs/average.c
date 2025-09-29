#include <stdio.h>

typedef struct {

    float mathGrade;
    float physicsGrade;
    float chemistryGrade;

}Student;

float average (Student* s1);

int main () {
    Student s1;

    printf("Enter grade for math: ");
    scanf("%f", &s1.mathGrade);

    printf("Enter grade for physics: ");
    scanf("%f", &s1.physicsGrade);

    printf("Enter grade for chemistry: ");
    scanf("%f", &s1.chemistryGrade);

    printf("Average: %.1f\n", average(&s1));

    return 0;
}

float average (Student* s1) {
    return (s1->mathGrade + s1->physicsGrade + s1->chemistryGrade) / 3;
}
