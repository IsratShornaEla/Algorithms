#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
struct student
{
    char ID[15];
    char name[20];
    char semester[20];
    char language[20];
    int problemsolve[10];
    int phone_no;
    int score;
};
void main()
    {int n;
        printf("\nEnter no. of Students : ");
          scanf("%d",&n);
          struct student s[n],temp;
          int i,j,uri1=5,uva1=10,uri,uva,total;



         for(i=0;i<n;i++){
    printf("Enter the id of the student");
    scanf("%d",&s[i].ID);
    printf("name:");
    scanf("%s",s[i].name);
    printf("semester :");
    scanf("%s",s[i].semester);
    printf("number: ");
     scanf("%d",&s[i].phone_no);
     printf("language : ");
     scanf("%s",s[i].languae);
     printf("\n\n\nANY PROBLEM SOLVED SITE??\NIf 'Yes' type -->YES\nIf 'No' type -->NO\n=>");
    scanf("%s",s[i].problemsolve);
    if(s[i].problemsolve=="yes")
    {
        printf("Uri :");
        scanf("%d",&uri);
        printf("Uva :");
        scanf("%d",&uva);
        total=(uri*uri1}+(uva*uva1);
        printf("%d",total);

    }


   // scanf("\t%s\t%s\t%s,%d",&s[i].name,s[i].semester,s[i].phone_no,&s[i].language);
    /*}
            for(j=0;j<n;j++)
            {
                if(s[j].score<s[j+1].score)
                {
                  temp=s[j];
                  s[j]=s[j+1];
                  s[j+1]=temp;
                }
            }

          printf("\nThe Merit List is :\n");
          for(j=0;j<n;j++)
          printf("%d\t%s\t%s\t%d\n",s[j].rollno,s[j].name,s[j].college,s[j].score);*/

        }

