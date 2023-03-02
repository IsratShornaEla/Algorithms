
#include<stdio.h>
int main()
{
    int n,i,data[500],item,loc=1,t,j=0,temp;
    printf("Enter a number how many inputs you want to give\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d", &data[i]);

    }
    printf("Enter a item which number i want to search\n");
    scanf("%d",&item);

    data[n+1]=item;
    t=n-1;
    while(1)

    {
        if(data[j]==item)
        {
            temp=j;

            printf("Item Found in position = %d\n",temp+1);
        }
        else if(t<0)
        {
            break;
        }
        t--;
        j++;
    }
    if(loc==n+1)
    {
        loc=0;

        printf("item is not found\n");
    }

}
