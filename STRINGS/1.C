#include<stdio.h>
int main(){

    printf("Strings in C\n");

    // char name[] = {'H','e','l','l','o','\0'};
    char name[] = "Hello"; // Shortcut for above

    printf("%s\t", name);

    char another[9];

    // scanf("%s",another);
    fgets(another,sizeof(another),stdin);
    printf("%s\n",another);

    return 0;
}