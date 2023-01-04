#include<stdio.h>

int main()
{
    int num;
    printf("enter a number for check\n");   //print the line to console
    scanf("%d",&num);         // take input from user
    if(num%97 == 0){       // % operator return remainder 
        printf("it is divisible by 97");     // this line is print when output is 0
    }
    else
    printf("it is not divisible by 97");

    return 0;
}