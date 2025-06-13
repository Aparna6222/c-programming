//students details and display grade

#include<stdio.h>
int main()
{
    int roll;
    char sub1[1000],sub2[1000],sub3[1000],name[1000],grade;
    float m1,m2,m3,total,avg;

    printf("Enter studends details \n");
    printf("roll NO.");
    scanf("%d",&roll);

    printf("Name:");
    scanf("%s",&name);

    printf("Subject 1 :");
    scanf("%s",&sub1);

    printf("Subject 2 :");
    scanf("%s",&sub2);
    
    printf("Subject 3 :");
    scanf("%s",&sub3);

    
    printf("MArks 1:");
    scanf("%f",&m1);

    printf("MArks 2:");
    scanf("%f",&m2);

    printf("MArks 3:");
    scanf("%f",&m3);

    total=m1+m2+m3;
    avg=total/3;

    if(avg<=100 && avg>=90)
    grade='A';

    else if(avg<90 && avg>=80)
    grade='B';

    else if(avg<80 && avg>=70)
    grade='C';

    else if(avg<70 && avg>=60)
    grade='D';

    else if(avg<60 && avg>=50)
    grade='E';

    else if(avg<50 && avg>=30)
    grade='F';

    
    printf("Roll No.:%d",roll);

    printf("\n Name:%d",name);

    printf("\n Subject1:%s",sub1);
    printf("\n Subject2:%s",sub2);
    printf("\n Subject3:%s",sub3);

    printf("\n Marks1:%f",m1);
    printf("\n Marks2:%f",m2);
    printf("\n Marks3:%f",m3);

    printf("\n Total:%f",total);
    printf("\n Avg:%f",avg);
    printf("\n Grade:%c",grade);

    return 0;
 
}