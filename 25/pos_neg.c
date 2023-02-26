#include<stdio.h>
int main()
{
    int input;
    printf("Enter number to check positive or negative :");
    scanf("%d",&input);
    if(input>=0)
    {
        printf("entered nuber is positive");
    }
    else
    {
        printf("entered number is negative");

    }
    return 0;
}