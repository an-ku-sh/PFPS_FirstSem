/* WAP to check Palindrome (While)*/

#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int n, reversed, remainder, original; 
    //clrscr(); 
    printf("Enter number"); 
    scanf("%d", &n); 
    original = n;

    //digit reversal logic using while(){}
    while(n!=0)
    {
        remainder = n % 10; 
        reversed = reversed*10 + remainder; 
        n /= 10; 
    }
    
    if(original == reversed)
    {
        printf("Palindrome"); 
    }
    else 
    {
        printf("not palindrome"); 
    }
    //getch(); 
}

/* OUTPUT 
Enter number121
Palindrome
*/