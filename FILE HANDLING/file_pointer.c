#include<stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("chethan.txt","a");
    /*
    "r"  ---> open for reading
    "w"  ---> open for Writing
    "a"  ---> Open for appending
    "rb" ---> Open a file for reading in binary
    "wb" ---> Open a file for writing in binary
    "ab" ---> Open a file for appending in binary
    "r+" ---> Open for both reading and writing (text)
    "w+" ---> Open for both reading and writing (text) . Truncates or Creates . But w+ will not create new file and will clear existing data
    "a+" ---> Open for reading and writing . Appends or create
    */

    if(ptr == NULL){
        printf("There was a problem opening this file!!");
        return 1;
    }
    return 0;
}