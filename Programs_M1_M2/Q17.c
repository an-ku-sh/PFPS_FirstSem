/*WAP to print all even and all odd numbers within a limit */


#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int n = 0, i; 
    //clrscr(); 
    printf("Enter the range"); 
    scanf("%d", &n); 
    for(i = 1; i <= n; i++)
    {
        if(i%2 == 0)
        {
            printf("Even no: %d \n", i); 
        }
        else 
        {
            printf("Odd no: %d \n", i); 
        }
    }
    //getch(); 
}

/* OUTPUT 
Odd no: 1
Even no: 2
Odd no: 3
Even no: 4
Odd no: 5
Even no: 6
Odd no: 7
*/