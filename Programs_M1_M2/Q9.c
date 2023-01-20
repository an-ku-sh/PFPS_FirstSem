/* WAP to take three sides, tell type and area of triangle*/

#include<stdio.h> 
//#include<conio.h> 
#include<math.h>

void main()
{
    float s1,s2,s3,s,area; 
    //clrscr(); 
    printf("Enter the sides of the triangle"); 
    scanf("%f %f %f", &s1, &s2, &s3); 

    if(s1 == s2 && s2 == s3)
    {
        printf("Equilateral Triangle \n"); 
    }
    else if ( s1 == s2 || s2 == s3 || s3 == s1)
    {
        printf("Isoceles \n"); 
    }
    else 
    {
        printf("Scalene \n"); 
    }

    s = (s1+s2+s3)/2; 
    area = sqrt((s*(s-s1)*(s-s2)*(s-s3)));
    printf("Area is %f", area);  
    //getch(); 
}

/* OUTPUT 
Enter the sides of the triangle34 34 34 
Equilateral Triangle
Area is 500.562683
*/