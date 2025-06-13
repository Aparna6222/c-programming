#include<stdio.h>
int main()
{
 float bs,totalSalary,da,hra,tax;
 int eid;
 char ename[100];
 FILE *fp;
 fp=fopen("salarySlip.txt","w");

printf("Enter Emp Detail:");
printf("\n ID:");
scanf("%d",&eid);
printf("Name:");
scanf("%s",&ename);
printf("Basic Salary:");
scanf("%f",&bs);
printf("DA (%%):");
scanf("%f",&da);
printf("HRA (%%):");
scanf("%f",&hra);
printf("TAX (%%):");
scanf("%f",&tax);

totalSalary= bs+((bs*(da+hra+tax))/100);

fprintf(fp,"\n \t------------------Employee Salary Slip------------------------");
fprintf(fp,"\n \tID              :%d",eid);
fprintf(fp,"\n \tName            :%s",ename);
fprintf(fp,"\n \tBasic Salary    :%.2f",bs);
fprintf(fp,"\n \tDA(%%)          :%.2f",da);
fprintf(fp,"\n \tHRA(%%)         :%.2f",hra);
fprintf(fp,"\n \tTAX(%%)         :%.2f",tax);
fprintf(fp,"\n \tTotal Salary(%%):%.2f",totalSalary);

return 0;
}