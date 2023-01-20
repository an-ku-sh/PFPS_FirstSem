/* WAP to reverse digits of a number*/

#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int i,n,r,s = 0; 
    //clrscr(); 
    printf("Enter number: ");
    scanf("%d", &n); 
    for(i = n; i >0;)
    {
        r = i%10; 
        s = s*10+r; 
        i=i/10; 
    }
    printf("The reversed digit of %d is %d",n, s); 
    //getch(); 
}

/* OUTPUT 
Enter number: 456789
The reversed digit of 456789 is 987654
*/