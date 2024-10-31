#include<stdio.h>
#include<conio.h>
void main()
{
        int No;

        printf("Enter a number : ");
        scanf("%d",&No);

         if(No%2 == 0){
                 printf("You entered an Even Number ");
         }
         else
         {
                 printf("You entered an Odd number ");
         }

         getch();


}