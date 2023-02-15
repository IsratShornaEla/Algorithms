#include<stdio.h>
int main()
{
    int note[100],note_needed,i,total_Note,total_Amount,count=0;
    printf("Enter total num of given coin :\n");
    scanf("%d",&total_Amount);
    printf("Enter the total note:\n");
    scanf("%d",&total_Note);
    printf("Enter the note:\n");
    for(i=1;i<=total_Note;i++)
    {
        scanf("%d",&note[i]);
    }
    for(i=1;i<=total_Note;i++)
    {
        if(note[i]<=total_Amount){
            note_needed=total_Amount/note[i];
            printf("%d notes of %d taka\n",note_needed,note[i]);
            count+=note_needed;
           total_Amount=total_Amount%note[i];
        }
    }
    printf(" need amount of note %d ",count);
    return 0;
}
