#include<stdio.h>
int main()
{
    int roll;
    char name[100],s1[100],s2[100],s3[100];
    float m1,m2,m3,total,avg;
    char grade;
     
    
    printf("enter a student details : ");
    printf("\nRoll Number : ");
    scanf("%d",&roll);
    printf("Name : ");
    scanf("%d",&name);
    printf("1st subject name : ");
    scanf("%s", &s1);
    printf("marks :");
    scanf("%f",&m2);
    printf("2nd subject name :");
    scanf("%s",&s2);
    printf("marks :");
    scanf("%f",&m1);
    printf("3rd subject name :");
    scanf("%s",&s3);
    printf("marks :");
    scanf("%f",&m3);
    
printf("student result.text","w");
total = m1 + m2 + m3;
avg = total / 3;

      if(avg<=100&&avg>=90)
      grade ='o';
      else if(avg<90&&avg>=80)
      grade = 'A';
      else if(avg<80&&avg>=70)
      grade ='B';
      else if(avg<70&&avg>=60)
      grade='C';
      else if(avg<60&&avg>=50)
      grade='D';
      else if(avg<50&&avg>=40)
      grade='E';
else
 
  grade='F';


printf("\n\t\tRoll Number : %d",roll);
printf("\n\t\tName : %s",name);
printf("\n\t\tSubject 1 : %s",s1);
printf("\n\t\tMarks : %f",m1);
printf("\n\t\tSubject 2 : %s",s2);
printf("\n\t\tMarks : %f",m2);
printf("\n\t\tSubject 3 : %s",s3);
printf("\n\t\tMarks : %f",m3);
printf("\n\t\tTotal : %f",total);
printf("\n\t\tAverage : %f",avg);
printf("\n\t\tGrade : %c",grade);


return 0;
    
}