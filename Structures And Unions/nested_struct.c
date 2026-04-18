#include<stdio.h>
#include<string.h>
struct Address {
    char city[30];
    int pincode;
};

struct Student {
    char name[30];
    struct Address addr;
};
void printStudent(struct Student);

int main()
{
    printf("Nested Strucctures\n\n");
    struct Student std;
    strcpy(std.name,"Chethan");
    std.addr.pincode=345363;
    strcpy(std.addr.city,"Banglore");
    printStudent(std);

}

void printStudent(struct Student std)
{
    printf("Name of student is : %s\n",std.name);
    printf("The address of student is : %d\n",std.addr.pincode);
    printf("The name of city he lives is : %s\n",std.addr.city);
}