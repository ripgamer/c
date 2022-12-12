#include <stdio.h>
int main()
{
    int mk1,mk2,mk3,mk4,mk5,max;
    int tot=mk1+mk2+mk3+mk4+mk5;
    int avg=(mk1+mk2+mk3+mk4+mk5)/5;
    int per=(tot/max)*100;
     printf("enter marks of subject 1 :");
    scanf("%d/n",&mk1);
     printf("enter marks of subject 2 :");
    scanf("%d",&mk2);
     printf("enter marks of subject 3 :");
    scanf("%d",&mk3);
     printf("enter marks of subject 4 :");
    scanf("%d",&mk4);
     printf("enter marks of subject 5 :");
    scanf("%d",&mk5);
    printf("enter maximum marks obatainble marks :");
    scanf("%d",&m);
    printf(" percentage of the student is :%d \n Average score is :%d \n"per,avg);    
    return 0;
}
