#include<stdio.h>
#include<string.h>
struct Student {
    char name[30];
    int roll;
    float marks;
};

int main()
{
    struct Student s1,s2,s3;
    struct Student *s1_ptr,*s2_ptr,*s3_ptr;
    
    s1_ptr=&s1;
    s2_ptr=&s2;
    s3_ptr=&s3;

    (*s1_ptr).roll=95;     // same as s1.roll=95
    (*s1_ptr).marks=95.55;
    strcpy((*s1_ptr).name,"Chethan");


    //Instead of doing above 3 lines 
    // We use arrow (->) operator

    s1_ptr->roll=89;  // same as (*s1_ptr).roll=95; 
    s1_ptr->marks=56.89;
}