//radius
#include<stdio.h>
int main()
{
    const float PI=3.14;
    int ch=1;
    int r;
    do
    {
        printf("Enter radius of circle:");
        scanf("%d",&r);
        printf("diameter of circle is:%d \narea of circle is:%f",2*r,PI*r*r);
        printf("\ndo you want to continue ? (0/1):");
        scanf("%d",&ch);
    }
    while(ch==1);
}