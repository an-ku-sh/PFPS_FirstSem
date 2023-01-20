/* WAP to find sqrt */

#include<stdio.h> 
//#include<conio.h> 
#include<math.h>

void main()
{
    float num, squareRoot; 
    //clrscr(); 
    printf("Enter the number"); 
    scanf("%f", &num); 
    squareRoot = sqrt(num);
    printf("The square root of %f is %f", num, squareRoot); 

    //getch(); 
}

/* OUTPUT 
Enter the number25
The square root of 25.000000 is 5.000000
*/