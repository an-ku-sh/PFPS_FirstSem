/* WAP to swap two varaibles using third variable */

#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int a, b, thirdVariable; 
    //clrscr(); 
    printf("Enter numbers to be swapped: "); 
    scanf("%d %d", &a, &b); 
    thirdVariable = a; 
    a = b; 
    b = thirdVariable; 
    printf("The Value of a and b after swapping is %d and %d", a, b); 
    //getch(); 
}

/* OUTPUT 
Enter numbers to be swapped: 12 78
The Value of a and b after swapping is 78 and 12
*/