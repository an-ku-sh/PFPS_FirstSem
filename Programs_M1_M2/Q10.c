/* WAP to check Leap Year*/


#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int year; 
    //clrscr(); 
    printf("Enter YEar \n"); 
    scanf("%d", &year); 
    if(year%4 == 0)
    {
        printf("%d Leap YEar", year); 
    }
    else if(year%400 == 0)
    {
        printf("%d is leap Year", year); 
    }
    else if(year%100 == 0)
    {
        printf("Not Leap Year"); 
    }
    else
    {
        printf("Not a Leap Year"); 
    }

    //getch(); 
}

/* OUTPUT 
Enter YEar 
2012
Leap YEar
*/