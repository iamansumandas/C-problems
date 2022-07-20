/*Write a program to find the greatest of three numbers entered through the keyboard.Use conditional operators.*/
#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("please enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c); //I am taking these input value as integer value but you can take this as float
//    (a>b&&a>c)?printf("The greatest number is %d\n",a):((b>a&&b>c)?printf("The greatest number is %d\n",b):printf("The greatest number is %d\n",c));
    max = (a>b)?(a>c?a:c):(b>c?b:c);
    printf("The greatest number is %d\n",max);
	return 0;
}