/*If the three side of a triangle are entered through the keyboard, write a program to check wheather the tringle is isosceles, equilateral, scalane or right angled triangle.*/
// Dt: 19/07/2022, Kendrapara
#include<stdio.h>
int main()
{
    int x,y,z;
    printf("please enter three sides of the triangle\n");
    scanf("%d%d%d",&x,&y,&z);
    // a equilateral triangle is a triangle in which all three sides have the same length
    if(x==y&&x==z&&y==z)
        printf("The triangle is a equilateral triangle\n");
    //a isosceles triangle have at least two sides of equal length and a right angle triangle follows pythagoras throrem 
    else if(x==y||x==z||y==z)
        {
            if((x*x)+(y*y)==(z*z)||(x*x)+(z*z)==(y*y)||(y*y)+(z*z)==(x*x))
            {
                printf("The triangle is both isosceles and right angle triangle\n");
            } 
            else
            {
                printf("The triangle is a isosceles triangle\n");
            }     
        }
    //a scalane triangle is a triangle in which all three sides in different lengths
    // a scalane triangle may be a right angled triangled
    else if(x!=y&&x!=z&&y!=z)
    
            if((x*x)+(y*y)==(z*z)||(x*x)+(z*z)==(y*y)||(y*y)+(z*z)==(x*x))
            {
                printf("The triangle is both scalane and right angle triangle\n");
            } 
            else
            {
                printf("The triangle is a scalane triangle\n");
            }
    else
        printf("Please enter valid triangle sides\n");
printf("Thank You\n");
    return 0;
}