////minimum from 2 numbers using goto
#include<stdio.h>
#include<conio.h>

int main()
{
   int n1=0,n2=0;
    up:
   printf("\nenter any two number to show minimum=");
   scanf("%d%d",&n1,&n2);
  
   if(n1==n2) 
   {
     printf("\n numbers are equal. \n enter different number");
     goto up;
   }
  else if (n1<n2)
   {
     printf("\n %d is minimum",n1);
   }
   else
   {
     printf("\n %d is minimum", n2);
   }
   getch();
   return 0;
}