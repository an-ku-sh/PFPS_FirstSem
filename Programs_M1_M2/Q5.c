/* WAP to check + or -  */

#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int num; 
    //clrscr(); 
    printf("Enter number to be checked"); 
    scanf("%d", &num); 
    if(num >= 0)
    {
        printf("Number is + ");
    }
    else 
    {
        printf("Number is - ");
    }
    //getch(); 
}

/* OUTPUT 
Enter number to be checked-8
Number is -
*/