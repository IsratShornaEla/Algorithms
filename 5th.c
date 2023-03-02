#include <stdio.h>
#include <stdlib.h>
void merge_sort(int a[],int p,int q);
void merge(int a[],int p,int q,int r);
void projectName();
void girlsStudentInfo();
void search();
void rankList();
void idSerial();
void sort();
struct StudentInfo
{
    char ID[20];
    char name[60];
    char email[70];

    char phone_no[12];
    char department[15];
    char semester [15];
    float sgpa[14];
    char workingLanguage[20];
    char answer[10];
} s[50];
int main()
{
    col1();
    projectName();
    int n;
    printf("Enter the number of student you want to add : ");
    scanf("%d",&n);
    int i,j;
    for(j=1; j<=n; j++)
    {

        printf("\nEnter ID:");
        scanf("%s",s[i].ID);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter email: ");
        scanf("%s",s[i].email);

        printf("Enter phone no.: ");
        scanf("%s",s[i].phone_no);

        printf("Student of Department :");
        scanf("%s",s[i].department);


        printf("Enter semester(1st -12 th): ");
        scanf ("%s",s[i].semester);

        printf("Enter CGPA: ");
        scanf("%f",&s[i].sgpa);
        printf("Do problem solving ?\n-> YES / NO\n=>");
        scanf("%s",s[i].answer);

        if(s[i].answer=="yes")
        {
            printf("Enter the the programming use for problem solving :");
            scanf("%s",s[i].workingLanguage);


        }


        printf("\n");

        //delay();
        //girlsStudentInfo();
    }  //input();
    return 0;
}
void col1()
{
    system("COLOR 3A");
}
void col2()
{
    system("COLOR 5B");
}
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

void sort()
{

}

