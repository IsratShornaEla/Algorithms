#include<stdio.h>
#include<stdlib.h>
void Quicksort(int a[],int start,int end)
{
    if(start<end)
    {
        int pIndex= partation(a,start,end);
        Quicksort(a,start,pIndex-1);
        Quicksort(a,pIndex,end);
    }
}

int partation(int a[],int start,int end)
{
    int i,temp1,temp2;
    int pivot=a[end];
    int pIndex=start;
    for(i=start; i<end; i++)
    {
        if(a[i]<=pivot)
        {
            temp1=a[i];
            a[i]=a[pIndex];
            a[pIndex]=temp1;

            pIndex++;
        }
    }
    temp2=a[pIndex];
    a[pIndex]=a[end];
    a[end]=temp2;

}




int main()
{
    int a[100];
    int i,n;
    scanf("%d",&n);

    for(i=0; i<n-1; i++)
    {
        scanf("%d",&a[i]);
    }
    Quicksort(a,0,n-1);
    for(i=0; i<n-1; i++)
    {
        printf("%d ", a[i]);
    }
    getch();

}
