/* WAP to check Armstrong number */


#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int x,s,xr,a,b,c = 0; 
    //clrscr(); 
    printf("Enter a number");
    scanf("%d", &a); 
    x = a; 
    while(x%10!=0)
    {
        xr = x % 10; 
        b = xr * xr * xr; 
        x = x/10; 
        c  = c + b; 
    }

    if(a == c)
    {
        printf("Armstrong Number"); 
    }
    else 
    {
        printf("Not Armstrong Number"); 
    }

    //getch(); 
}

/* OUTPUT 
Enter a number153
Armstrong Number
Enter a number24
Not Armstrong Number
*/