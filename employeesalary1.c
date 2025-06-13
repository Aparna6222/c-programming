//Accept Employee details like id,name,basic salary,da,
#include<stdio.h>
int main()
{
    int id;
    char name[100];
    float bs,da,hra,tax,totalsalary,inhand;
    printf("Enter Empoloyee Details \n");
    printf("ID:");
    scanf("%d",&id);

    printf("Name:");
    scanf("%s",&name);

    printf("Basic salary:");
    scanf("%f",&bs);

    printf("DA:");
    scanf("%f",&da);

    printf("HRA:");
    scanf("%f",&hra);

    if(bs>=200000)
    tax=20;

    else if(bs>=150000)
    tax=15;

    else if(bs>=100000)
    tax=10;

    else if(bs>=80000)
    tax=5;

    else if(bs>=50000)
    tax=3;

    else tax=0;

    totalsalary=bs+((bs)*(da+hra-tax)/(100));
    inhand=totalsalary;

    printf("\n ID :%d",id);
    printf("\n Name :%d",name);
    printf("\n Basic Salary :%f",bs);
    printf("\n DA (%%) :%f",da);
    printf("\n HRX (%%) :%f",hra);
    printf("\n TAX (%%) :%f",tax);
    printf("\n Total Salary :%f",totalsalary);
    printf("\n In Hand :%f",inhand);

    return 0;

}