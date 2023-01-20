/* WAP to swap two variable without using third variable*/

#include<stdio.h> 
//#include<conio.h> 

void main()
{
    int a,b; 
    //clrscr(); 
    printf("Enter numbers to be swapped \n"); 
    scanf("%d %d", &a, &b); 
    a = a + b;
    b = a - b;
    a = a - b;  
    printf("a:%d b:%d \n",a,b);
    printf("The Value of a and b after swapping is %d and %d", a, b);
    //getch(); 
}

/* OUTPUT 
Enter numbers to be swapped56 89
The Value of a and b after swapping is 89 and 56
*/