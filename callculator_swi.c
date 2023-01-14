#include<stdio.h>
int main()
{
    float num1,num2;
    char ch;
    printf("\n\t##### MENU #####\n\t(+) add\n\t(-) sub\n\t(*) mull\n\t(/) div\n\t(0) exit :");
    scanf("%c",&ch);
    printf("\n\tEnter oprants (a,b):");
    scanf("%f%f",&num1,&num2);
    switch(ch)
    {
    case '+':
    printf("\n\t %f %c %f = %f \n",num1,ch,num2,num1+num2);
    break;
    case '-':
    printf("\n\t %f %c %f = %f \n",num1,ch,num2,num1-num2);
    break;
    case '*':
    printf("\n\t %f %c %f = %f \n",num1,ch,num2,num1*num2);
    break;
    case '/':
    printf("\n\t %f %c %f = %f \n",num1,ch,num2,num1/num2);
    break;
    case '0':
    printf("\n\t BYE BYE...\n");
    break;
    default:
    printf("\n\t ENTER A VALID OPTION\n");
    
    }
    return 0;

}