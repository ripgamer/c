//20)	Create a structure to read and display the following information of a book: name, price and number of pages
#include<stdio.h>
#include<string.h>
struct book {
    char name[20];
    int price;
    int pages;
}book1[10];
int main()
{

    printf("Enter name of book:");
    scanf("%s",book1[1].name);
    printf("Enter price of book:");
    scanf("%d",&book1[1].price);
    printf("Enter pages of book:");
    scanf("%d",&book1[1].pages);
    printf("%s",book1[1].name);
    printf("%d",book1[1].price);
     printf("%d",book1[1].pages);
    
}