//PES1UG25AM095
#include<stdio.h>
#include<string.h>

struct students
{
    char usn[10];
    char name[10];
    int marks[3];
    float attendance;

    float scholarship;
    char grade;
    char eligibility[20];
    char result[10];
    float avg;
    int total;
};

int main()
{
    int n, top_student_index = -1;
    int pass = 0, fail = 0, not_eligible = 0;
    float highest_avg = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct students s1[n];

    for(int i = 0; i < n; i++)
    {
		printf("\n\n");        printf("Enter details of student %d\n", i + 1);

        printf("Enter USN: ");
        getchar();
        scanf("%[^\n]", s1[i].usn);

        printf("Enter Name: ");
        getchar();
        scanf("%[^\n]", s1[i].name);

        s1[i].total = 0;

        printf("Enter marks in 3 subjects: ");
        for(int j = 0; j < 3; j++)
        {
            scanf("%d", &s1[i].marks[j]);
            s1[i].total += s1[i].marks[j];
        }

        printf("Enter attendance percentage: ");
        scanf("%f", &s1[i].attendance);

        s1[i].avg = s1[i].total / 3.0;

        if(s1[i].marks[0] < 35 || s1[i].marks[1] < 35 || s1[i].marks[2] < 35)
        {
            strcpy(s1[i].result, "Fail");
            fail++;
        }
        else
        {
            strcpy(s1[i].result, "Pass");
            pass++;
        }

        if(s1[i].avg >= 85)
        {
            s1[i].grade = 'A';
        }
        else if(s1[i].avg >= 70 && s1[i].avg < 85)
        {
            s1[i].grade = 'B';
        }
        else if(s1[i].avg >= 50 && s1[i].avg < 70)
        {
            s1[i].grade = 'C';
        }
        else if(s1[i].avg < 50)
        {
            s1[i].grade = 'D';
        }

        if(s1[i].attendance < 75)
        {
            strcpy(s1[i].eligibility, "Not Eligible");
            not_eligible++;
        }
        else
        {
            strcpy(s1[i].eligibility, "Eligible");
        }

        s1[i].scholarship = 0;

        if(strcmp(s1[i].result, "Pass") == 0 && strcmp(s1[i].eligibility, "Eligible") == 0)
        {
            if(s1[i].avg >= 90 && s1[i].attendance >= 90)
                s1[i].scholarship = 10000;
            else if(s1[i].avg >= 80 && s1[i].attendance >= 85)
                s1[i].scholarship = 5000;
            else
                s1[i].scholarship = 0;
        }

        if(s1[i].avg > highest_avg && strcmp(s1[i].eligibility, "Eligible") == 0)
        {
            highest_avg = s1[i].avg;
            top_student_index = i;
        }
    }

    for(int i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("USN: %s\n", s1[i].usn);
        printf("Name: %s\n", s1[i].name);

        printf("Marks: ");
        for(int j = 0; j < 3; j++)
            printf("%d ", s1[i].marks[j]);

        printf("\nAttendance: %.2f\n", s1[i].attendance);
        printf("Total: %d\n", s1[i].total);
        printf("Average: %.2f\n", s1[i].avg);
        printf("Result: %s\n", s1[i].result);
        printf("Grade: %c\n", s1[i].grade);
        printf("Eligibility: %s\n", s1[i].eligibility);
        printf("Scholarship: %.2f\n", s1[i].scholarship);
    }

    printf("\n========= Summary =========\n");
    printf("Passed Students : %d\n", pass);
    printf("Failed Students : %d\n", fail);
    printf("Students Not Eligible by Attendance : %d\n", not_eligible);

    printf("\n===== Top Eligible Student =====\n");
    if(top_student_index != -1)
    {
        printf("USN: %s\n", s1[top_student_index].usn);
        printf("Name: %s\n", s1[top_student_index].name);
        printf("Average: %.2f\n", s1[top_student_index].avg);
        printf("Attendance: %.2f\n", s1[top_student_index].attendance);
    }

    return 0;
}

