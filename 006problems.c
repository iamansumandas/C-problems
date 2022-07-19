/*Write a program to print all the ASCII values and their equivalent character using a while loop.The ASCII values vary form 0 to 255.*/
#include<stdio.h>
int main()
{
    char c;
    int i;
    i=0;
    while(i<=255)
    {
        c=i;
        printf("%d - %c\n",i,c);
        i++;
    }
    return 0;
}