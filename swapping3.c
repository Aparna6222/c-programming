#include<stdio.h>
int main()
{

    int a=10,b=20,c=15;
    
    printf("Enter  three number :");
   scanf("%d%d%d,&a , &b,&c");
   
   c=a;
   a=b;
   b=c;

   printf("After swapping:a=%d,b=%d,c=%d",a,b,c);

   return 0;
}
