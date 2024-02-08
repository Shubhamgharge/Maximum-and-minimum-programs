////maximum from 2 numbers
#include<stdio.h>
#include<conio.h>

int main()
{
   int n1=0,n2=0;
    
   printf("enter any two number to show maximum=");
   scanf("%d%d",&n1,&n2);
  
   if(n1==n2) 
   {
     printf("\n %d and %d are equal",n1, n2);
   }
   else if(n1>n2)
   {
     printf("\n %d is maximum",n1);
   }
   else
   {
     printf("\n %d is maximum", n2);
   }
   getch();
   return 0;
}