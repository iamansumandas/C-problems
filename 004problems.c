/*Write a program to fing the factorial value of any number entered through the keyboard*/
#include<stdio.h>
int main()
{
    int num,i,fact;
    printf("please enter the number\n");
    scanf("%d",&num);
    fact=i=1;
    while(i<=num)
    {
        fact=fact*i;
        i++;
    }
     printf("The factorial of %d is %d\n",num,fact);
    return 0;
}