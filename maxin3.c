//find max among 3 no.:using else if ladder
#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter 3 numbers :");
scanf("%d%d%d",&a,&b,&c);

if (a>=b && a>=c)
printf("MAx is %d",a);

else if(b>=a && b>=c)
printf("Max is %d",b);

else
printf("Max is %d",c);

return 0;

}