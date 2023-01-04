#include <stdio.h>
int main()
{
    int mk1,mk2,mk3,mk4,mk5;
    printf("enter marks of phy,maths,chem,english,cp:");
    scanf("%d %d %d %d %d",&mk1,&mk2,&mk3,&mk4,&mk5);
    printf(" percentage of the student is :%d \n Average score is :%d \n",((mk1+mk2+mk3+mk4+mk5)*100)/500,(mk1+mk2+mk3,mk4,mk5)/5);    
    return 0;
}
