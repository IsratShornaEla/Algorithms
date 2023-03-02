
#include<stdio.h>
#include<stdlib.h>
void projectName();
void girlsStudentInfo();
void search();
void rankList();
void idSerial();
int main()
{
   projectName();
    //delay();
   girlsStudentInfo();
   input();
}
void col1(){system("COLOR 3A");}
void col2(){system("COLOR 5B");}
void projectName()
{
    printf(
        "\t\t\t\t\t+-----------------------------+\n"
        "\t\t\t\t\t|GIRLS PROGRAMERS INFORMATION |\n"
        "\t\t\t\t\t+-----------------------------+\n"
    );
}
void delay()
{
        int i;
        for (i = 0; i < 500000000; i++ );
}
struct girlsStudentInfo
{
    int Rank,numbOfGirls,id,cellNum,semester,URI1,UVA1,CODEFORCE1;
    char name[60];
    char email[70];
    char section[15];

};
void input()
{
    struct girlsStudentInfo s[20],temp;
    int i,j,n,uva=10,uri=5,codeforce=15,totalSolve,uva1,uri1,codeforce1,URI1,UVA1,CODEFORCE1;

    printf("\nEnter no. of Students : ");
    scanf("%d",&n);
    //printf("\nEnter the rollno,name,college name,score ");

    for(i=0;i<n;i++){
    printf("Enter the id of the student :");
    scanf("%d",&s[i].id);
    system("CLS");
    printf("Name : ");
    scanf("%s",&s[i].name);
    printf("\nEmail : ");
    scanf("%s",&s[i].email);
    printf("\ncellNum : ");
    scanf("%d",&s[i].cellNum);
    printf("\nsemester: ");
    scanf("%d",&s[i].semester);
    printf("\nsection: ");
    scanf("%s",&s[i].section);
    system("CLS");
    printf("How many problems Have solve?\nAnswer : \n");
    printf("URI solved prblems : ");
           scanf("%d",&s[i].URI1);
    uri1=uri*URI1;
    printf("\nUVA solved prblems : ");
    scanf("%d",&s[i].UVA1);
    uva1=uva*UVA1;
    printf("\nCODEFORCE solved prblems : ");
    scanf("%d",&s[i].UVA1);
    codeforce1=codeforce*CODEFORCE1;
    totalSolve=uri1+uva1+codeforce1;
    printf("TOTAL SOLVED : %d",totalSolve);
    system("CLS");

   printf("Name : %d\n,Email : %s\n,Email : %s\n,Phone no. :%d\n,WSemes ");
    }


}
void search()
{

}
