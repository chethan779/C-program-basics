#include<stdio.h>

int  very_complicated_Func(int x); 

int main(){
    printf("Hello World!!!");

    int a = 45;
    int b = 7;
    int c = very_complicated_Func(a);

    // Now as this takes 7 hrs to execute and also as it runs on ram which is temporary storage and as this takes 7 hrs ram will just forget it due to its temporary behaviour . There comes Files so that u can store the output there which is a permanent memory
    return 0;
}

int very_complicated_Func(int x)
{
    return 7; // Example say it takes 7 hrs to execute
}