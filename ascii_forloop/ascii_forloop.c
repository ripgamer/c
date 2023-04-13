#include<stdio.h>
int main()
{
    int i,j,ch;
    printf("\nEnter starting ascii value :");
    scanf("%d",&j);
    printf("\nEnter termenating ascii value :");
    scanf("%d",&ch);
    for ( i=j;i<=ch;i++)
    {
        printf("%c :: %d\n",i,i);
        if (i==ch)
        {
            break;
        }
        
        
    }
    return 0;
    
}