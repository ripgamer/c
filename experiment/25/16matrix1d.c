//16)	Write a program in C for addition of two one dimensional matrix of size 5
#include<stdio.h>
int main()
{
    int i,mat1[5],mat2[5],mat3[5];

    printf("Enter matrix 1 elements:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&mat1[i]);
    }
    printf("Enter matrix 2 elements:");
    for(i=0;i<=4;i++)
    {
        scanf("%d",&mat2[i]);
    }
    for(i=0;i<=4;i++)
    {
      mat3[i]=mat2[i]+mat1[i];  
      printf("%d",mat3[i]);
    }
    
    
    return 0;
}