////maximum of 2 num by turnary
#include<stdio.h>
#include<conio.h>

int main()
{
   int n1=0,n2=0;
    up:
   printf("\nenter any two number to show maximum=");
   scanf("%d%d",&n1,&n2);
  
   if(n1==n2) 
   {
     printf("\n numbers are equal. \n enter different number");
     goto up;
   }
  (n1>n2) ? printf("\n %d is maximum",n1):printf("\n %d is maximum", n2);
   
   getch();
   return 0;
}