#include <stdio.h>
#include <string.h>

struct Student {
    int id;
    char name[50];
    int m1, m2, m3;
};

void analyzeStudent(struct Student s);

int main() {
    struct Student s1;

    printf("Enter Student ID: ");
    scanf("%d", &s1.id);

    printf("Enter Student Name: ");
    getchar(); 
    scanf("%[^\n]", s1.name);

    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &s1.m1, &s1.m2, &s1.m3);

    analyzeStudent(s1);

    return 0;
}

void analyzeStudent(struct Student s) {
    float total = s.m1 + s.m2 + s.m3;
    float percentage = total / 3.0;
    char result[10];
    char grade;

    if (s.m1 < 35 || s.m2 < 35 || s.m3 < 35) {
        strcpy(result, "Fail");
        grade = 'F'; 
    } else {
        strcpy(result, "Pass");
        
        if (percentage >= 90) {
            grade = 'A';
        } else if (percentage >= 75 && percentage < 90) {
            grade = 'B';
        } else if (percentage >= 60 && percentage < 75) {
            grade = 'C';
        } else if (percentage >= 50 && percentage < 60) {
            grade = 'D';
        } else {
            grade = 'E';
        }
    }

    printf("Student Details\n");
    printf("ID : %d\n", s.id);
    printf("Name : %s\n", s.name);
    printf("Marks : %.2f %.2f %.2f\n", (float)s.m1, (float)s.m2, (float)s.m3);
    printf("Total : %.2f\n", total);
    printf("Percentage : %.2f\n", percentage);
    printf("Result : %s\n", result);
    
    if(strcmp(result, "Pass") == 0) {
        printf("Grade : %c\n", grade);
    }
}