/*Use the conditional operators determine:
(1) Wheather the character entered through the keyboard is a lower case alphabet or not.
(2) Wheather the character entered through the keyboard is a special symbol or not.*/
#include<stdio.h>
int main()
{
    char c;
    printf("please enter the character\n");
    scanf("%c",&c);
    c>=97&&c<=122?printf("It is a lower case alphabet\n"):printf("It is not a lower case alphabet\n");
    ((c>=0&&c<=47)||(c>=58&&c<=64)||(c>=91&&c<=96)||(c>=123&&c<=127))?printf("It's a special symbol\n"):printf("It's not a special symbol\n");
    return 0;
}