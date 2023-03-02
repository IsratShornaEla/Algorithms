#include <stdio.h>
#include <stdlib.h>
void merge_sort(int a[],int p,int q);
void merge(int a[],int p,int q,int r);
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
   //input();
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
struct StudentInfo
{
   char ID[20];
    char name[60];
    char email[70];
    char semester [15];
    int phone_no;
char department[15];
float sgpa;
}s[50];
void input()
{
    int n;
    ptintf("Enter the number of student you want to add : ");
    scanf("%d",&n);
    int i,j;
    for(i=1;i<=n;i++)
    {

        printf("\nEnter ID:");
        scanf("%s",s[i].ID);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter email: ");
        Scanf("%s",s[i].email);

        printf("Enter phone no.: ");
        Scanf("%s",s[i].phone_no);

        printf("Student of Department :");
        scanf("%s",s[i].department);


        printf("Enter semester(1st -12 th): ");
        printf("%s",s[i].semester);



        printf("Enter cgpa: ");
        scanf("%f",&s[i].sgpa);

        printf("\n");
    }
}


/*int main()
{
    int n,i,a[100];
    printf("Total number of element :");
    scanf("%d",&n);
    printf("Enter element in your array::");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    merge_sort(a,0,n-1);
    printf(" Sorted Array :\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }


    return 0;
}
merge_sort(int a[],int p,int r)
{
    int q,i;
    if(p<r)
    {
        q=(p+r)/2;
        merge_sort(a,p,q);
        merge_sort(a,q+1,r);
        merge(a,p,q,r);
    }

}
void merge(int a[],int p,int q,int r)
{
    int L[50],R[50];
    int n1,n2,i,j,k;
    n1=q-p+1;
    n2=r-q;
    for(i=0;i<n1;i++)
    {
        L[i]=a[p+i];
    }
    for(j=0;j<n2;j++)
    {
        R[j]=a[q+1+j];
    }
    L[i]=8888;
    R[j]=8888;
    i=0;
    j=0;
    for(k=p;k<=r;k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;

        }
        else
        {
            a[k]=R[j];
            j++;
        }
    }


}*/


