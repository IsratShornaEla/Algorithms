#include<stdio.h>
int main()
{

    int i,j,k,n,data[10000],temp,c=0;
    printf("how much number want to get\n");
    scanf("%d",&n);
    printf("Enter the input:\n");
    for(i=0;i<n;i++)
    {

        scanf("%d",&data[i]);
    }
    for(i=0;i<n;i++)
    {

        j=i;
        while(j>0 && data[j]<data[j-1])
        {
            temp=data[j];
            data[j]=data[j-1];
            data[j-1]=temp;
           // printf("\n");
          //  printf("\nIteraton %d Step %d :-\n",i,c);
           // for(k=0;k<n;k++)
            //{

             printf("  %d,",data[k]);
//
            //}
           // c++;
            j--;
        }
            //c=0;

    }

     for(j=0;j<n;j++)
    {

        printf("\nsorting is = %d\n",data[j]);
    }
    return 0;
}
