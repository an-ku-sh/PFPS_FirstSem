/* WAP to add all digits of a number*/


#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int n,t,sum = 0, remainder; 
    //clrscr(); 
    printf("Enter number"); 
    scanf("%d", &n); 
    t = n; 
    while(t!=0)
    {
        remainder = t%10; 
        sum = sum + remainder; 
        t = t/10; 
    }
    printf("Sum of digits of %d is %d", n, sum); 

    //getch(); 
}

/* OUTPUT 
Enter number178
Sum of digits of 178 is 16
*/