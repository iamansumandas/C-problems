/*The body mass index (BMI) is defined as ratio of the weight of a person (in kilograms) to the square of the height (in meters)*/
#include<stdio.h>
int main()
{
    float h,w,bmi;
    printf("please enter height and weight\n");
    scanf("%f%f",&h,&w);
    bmi = w/(h*h);
    if(bmi<15)
        printf("Starvation\n");
    else if(bmi>=15.1&&bmi<=17.5)
        printf("Avorexic\n");
    else if (bmi>=17.6&&bmi<=18.5)
        printf("Underweight\n");
    else if(bmi>=18.6&&bmi<=24.9)
        printf("Idel\n");
    else if(bmi>=25&&bmi<=25.9)
        printf("Overweight\n");
    else if(bmi>=30&&bmi<=30.9)
        printf("Obese\n");
    else if(bmi>=40)
        printf("Morbidly Obese");
    printf("Thank You");
    return 0;
}