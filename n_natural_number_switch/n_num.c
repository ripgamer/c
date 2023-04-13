//code to print n natural number using while loop
#include<stdio.h>
int main()
{
    int i=1,n;
    printf("\nEnter nth number till you want to display:\n");
    scanf("%d",&n);
    printf("natural number till %d is :\n",n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
