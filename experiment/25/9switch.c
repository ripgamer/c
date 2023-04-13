#include<stdio.h>
int main()
{
    int ch,a,b;
    printf("1=add\n2=sub :");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    printf("enter no. 1");
    scanf("%d",&a);
    printf("enter no. 2");
    scanf("%d",&b);
    printf("addition is %d",a+b);
    break;
    case 2:
    printf("enter no. 1");
    scanf("%d",&a);
    printf("enter no. 2");
    scanf("%d",&b);
    printf("addition is %d",a-b);
    break;
    }
    return 0;
}