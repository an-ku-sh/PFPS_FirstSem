/* WAP to print sum of all even and all odd numbers */


#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int  i, EvenSum = 0, OddSum = 0; 
    //clrscr(); 
    for(i = 1; i <= 100; i++)
    {
        if(i%2 == 0)
        {
             EvenSum+=i;
        }
        else 
        {
             OddSum+=i; 
        }
    }
    printf("EvenSum = %d, OddSum = %d", EvenSum, OddSum); 
    //getch(); 
}

/* 
EvenSum = 2550, OddSum = 2500
*/