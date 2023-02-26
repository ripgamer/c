#include<stdio.h>
int main()
{
    int r,s,a;
    printf("enter r:");
    scanf("%d",&r);
    printf("enter s:");
    scanf("%d",&s);
    printf("enter a:");
    scanf("%d",&a);
    if(r<s&&r<a)
    {
       
            printf("r is youngest");
        
        
    }
    if(s<r&&s<a)
    {
        printf("s is youngest");
    }
     if(a<r&&a<s)
    {
        printf("a is youngest");
    }
}