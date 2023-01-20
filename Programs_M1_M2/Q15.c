/* WAP to check if prime or not*/

#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int n,i,factors = 0; 
    //clrscr();
    printf("Enter any number n"); 
    scanf("%d", &n); 
    for(i = 1; i <= n;i++)
    {
        if(n%i == 0)
        {
            factors++;
        }
    }
    if(factors == 2)
    {
        printf("Prime"); 
    }
    else 
    {
        printf("Not prime"); 
    }
    

    //getch(); 
}

/* OUTPUT 
Enter any number n7
Prime
*/