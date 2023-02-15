#include<stdio.h>
int main()
{
    int i,j,temp,n;
    int a[100];
    printf("enter the number of data you want to take : \n");
    scanf("%d",&n);
    printf("take the a : \n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("the bubble shorted data = \n");
   for(i=1;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
