/*Write a program using conditional operators to determine whether a year entered through the keyboard is a leap year or not.*/
#include<stdio.h>
int main()
{
    int y;
    printf("Please enter the year\n");
    scanf("%d",&y);
    (y%400==0||(y%100!=0&&y%4==0))?printf("Leap year\n"):printf("Not a leap year\n");
    return 0;
}