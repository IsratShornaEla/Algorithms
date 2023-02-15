/*#include <stdio.h>


int main()
{
   int arr[1000], search, i, n, count = 0;

   printf("Enter the number of elements \n");
   scanf("%d", &n);

   printf("Enter %d numbers\n", n);

   for (i = 0; i < n; i++)
      scanf("%d", &arr[i]);

   printf("Enter the number to search\n");
   scanf("%d", &search);

   for (i = 0; i < n; i++) {
      if (arr[i] == search) {
         printf("%d is found at location %d.\n", search, i+1);
         count++;
      }
   }
   if (count == 0)
      printf("%d is not found in the array.\n", search);
   else
      printf("%d is found %d times in the array.\n", search,count);

   return 0;
}
*/
#include<stdio.h>
int main()
{
    int data[1000],n,i,search,c=0;
    printf("enter the num of element\n");
    scanf("%d",&n);
    printf("enter the input\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&data[i]);

    }
        printf("enter the search item\n");
        scanf("%d",&search );
         for(i=0;i<n;i++)
         {
             if(data[i]==search)
             {
             printf("%d is found at %d locatiion\n",search,i+1);
              c++;
             }
         }
         if(c==0)
         {
              printf("%d is not found \n",search);
         }
         else
         {
          printf("%d is found at %d times\n",search,c);
         }
}





