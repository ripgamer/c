#include<stdio.h>
void swap(int *a,int *b);
int main()
{
    int num1,num2;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter num2:");
    scanf("%d",&num2);
    printf("before swaping in main function%d,%d\n",num1,num2);
    swap(&num1,&num2);
    printf("after swaping in main function%d,%d\n",num1,num2);
    return 0;

}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swaping in swap function%d,%d\n",*a,*b);
}