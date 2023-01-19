#include<stdio.h>
int main()
{
    int n;
    int ch=1;
    printf("\nEnter no to check if it is odd or even:");
    scanf("%d",&n);
    do
    {
        if(n%2==1)
        {
            printf("Entered number %d is ODD \n",n);
        }
        else
        {
            printf("Entered number %d is EVEN \n",n);
           
        }
        printf("Do you want to continue(0/1):");
        scanf("%d",&ch);

    }while(ch==1);

return 0;
}