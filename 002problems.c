/* A certain grade of steel is graded according to the following conditions:
(i)Hardness must be greater than 50
(ii)Carbon content must be less than 0.7
(iii)Tensile strength must be gteater than 5600
The grades are as follows:
Grade is 10 if all the conditions are met
Grade is 9 if conditions (i) and (ii) are met
Grade is 8 if conditions (ii) and (iii) are met
Grade is 7 if conditions (i) and (iii) are met
grade id 6 if only one condition is met
Grade is 5 if none of the conditions are met */
#include<stdio.h>
int main()
{
    int h, ts;
    float cc;
    printf("please enter Hardness,Carbon content,Tensile strength\n");
    scanf("%d%f%d",&h,&cc,&ts);
    if(h>50&&cc<0.7&&ts>5600)
        printf("The grade is 10\n");
    else if(h>50&&cc<0.7)
        printf("The grade is 9\n");
    else if(cc<0.7&&ts>5600)
        printf("The grade is 8\n");
    else if(h>50&&ts>5600)
        printf("The grade is 7\n");
    else if(h>50||cc<0.7||ts>5600)
        printf("The grade is 6\n");
    else
        printf("The grade is 5\n");
    printf("Thank You");
}