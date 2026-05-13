#include<stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main(){
    struct Student s = {"Harry", 90};
    FILE *ptr = fopen("student.dat", "wb");
    fwrite(&s, sizeof(s), 1, ptr);
    fclose(ptr);
}
