#include<stdio.h>
int main()
{
char ch;
printf("\nEnter any alphabet:");
scanf("%c",&ch);
switch(ch)
{
    case 'a':
    printf("\n%c is a vowel\n",ch);
    break;
    case 'e':
    printf("\n%c is a vowel\n",ch);
    break;
    case 'i':
    printf("\n%c is a vowel\n",ch);
    break;
    case 'o':
    printf("\n%c is a vowel\n",ch);
    break;
    case 'u':
    printf("\n%c is a vowel\n",ch);
    break;
    default :
    printf("%c is a consonent\n",ch);
    break;
}
return 0;
}