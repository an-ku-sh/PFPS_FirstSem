/* WAP for Simple Interest */

#include<stdio.h> 
//#include<conio.h> 

void main()
{
    float Principle,ROI,Term,SI; 
    //clrscr(); 
    printf("Enter Principle"); 
    scanf("%f", &Principle); 
    printf("Enter ROI"); 
    scanf("%f", &ROI); 
    printf("Enter Term"); 
    scanf("%f", &Term); 
    SI = (Principle*Term*ROI)/100; 
    printf("The SI is %f", SI); 
    //getch(); 
}

/* OUTPUT 
Enter Principle3455
Enter ROI12
Enter Term3
The SI is 1243.800049
*/
