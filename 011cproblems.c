/*If a five digit number is input through the keyboard, write a program to calculate the sum of its digits.*/
#include<stdio.h>
int main(){
    int n, d1,d2,d3,d4,d5,sum;
    printf("please enter a five digit number\n");
    scanf("%d",&n);
    d5 = n%10; // 12345%10 = 5
    n = n/10; //12345/10 = 1234.5 (as we declare n as a int variable so it will neglet .5 )
    d4 = n%10; // 1234%10 = 4
    n = n/10;//1234/10 = 123.4
    d3 = n%10; //123%10=3
    n = n/10; //123/10=12.3
    d2 = n%10; //12%10 =2
    n =  n/10; //12/10 = 1.2
    d1 = n;
    sum = d1+d2+d3+d4+d5;
    printf("The sum is : %d",sum);
    return 0;
}