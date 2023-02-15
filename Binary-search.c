/*#include<stdio.h>
int main()
{
 int data[1000],n,item,loc,beg,end,mid,i;
 printf("enter the number\n");
  scanf("%d",&n);

 printf("enter the input\n");
 for(i=1;i<=n;i++)
 {

     scanf("%d",&data[i]);
 }
   beg=1,end=n;
 printf("enter the item\n");

  scanf("%d",&item);
  mid=(beg+end)/2;

 while(beg<=end  && data[mid]!=item ){

    if(item<data[mid])
    {
    end=mid-1;
    }
    else{
        beg =mid+1;
    }
    mid=(beg+end)/2;
 }

 if(data[mid]==item)
 {
     loc=mid;
     printf("data is found at loc = %d\n",loc);
 }
 else{
    loc=0;
     printf("data is not found");
 }

 return 0;
}*/
#include<stdio.h>
int main()
{
    int data[1000],n,item,loc,beg,end,mid,i;
    printf("enter the the num  of element \n");
    scanf("%d",&n);
     printf("enter the the num  of input \n");
     for(i=1;i<=n;i++)
     {
         scanf("%d",&data[i]);
     }
      printf("enter the item \n");
      scanf("%d",&item);
      beg=1,end=n;
      mid=(beg+end)/2;
      while(beg<=end && data[mid]!=item)
      {
          if(item<data[mid])
          {
              end=mid+1;
          }
          else{
              beg=mid+1;
          }
           mid=(beg+end)/2;
      }
      if(data[mid]==item)
      {
          loc=mid;
          printf("data found at loc %d\n",loc);
      }
      else{
        loc=0;
        printf("data is not found\n");
      }
      return 0;
}























