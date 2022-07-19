/*Two number are enterd through the keyboard. Write a program to find the value of one number raised to the power of another.*/
#include<stdio.h>
int main()
{
    float a,power;
    int b,i;
    printf("please enter the two number\n");
    scanf("%f%d",&a,&b);
    power=i=1;
    while(i<=b)
    {
        power=power*a;
        i++;
    }
    printf("%f to the power %d is %f\n",a,b,power);
    return 0;
}