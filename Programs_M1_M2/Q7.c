/* WAP to find roots of quadratic eqn */

#include<stdio.h> 
//#include<conio.h> 
#include<math.h>

void main()
{
    float a,b,c,d,root1,root2; 
    //clrscr(); 
    printf("Enter a,b,c of Quadratic"); 
    scanf("%f %f %f", &a, &b, &c); 
    d = b*b - 4*a*c; 
    if(d > 0)
    {
        root1 = -b + sqrt(d)/(2*a); 
        root2 = -b - sqrt(d)/(2*a); 
        printf("The roots are %f and %f", root1, root2); 
    }
    else if(d == 0)
    {
        root1 = -b/(2*a); 
        root2 = root1; 
        printf("The roots are %f and %f", root1, root2); 
    }
    else 
    {
        printf("Imaginary roots"); 
    }
    //getch(); 
}

/* OUTPUT 

Enter a,b,c of Quadratic 3 4 5
Imaginary roots

Enter a,b,c of Quadratic 1 -4 4
The roots are 2.000000 and 2.000000

*/