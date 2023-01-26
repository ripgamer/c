#include <stdio.h>
#include <string.h>
int menu1(),menuatt(); //declaring diffrent mene function
int menuatt() //attendence function
{
  int choice;
   printf("\n\n\n\t##### ATTENDENCE #####\n\t(1) \n\t(0)EXIT \n\t:");
   scanf("%d",&choice);
   switch(choice)
    {
    case 1:
    break;
    case 0:
    menu1();
    break;
    default : 
    printf("\n\tenter a valid choice\n");
    break;
    } 
   return 0;
}
int menu1()   //main menu function
   {
   int choice;
   printf("\n\n\n\t##### MENU #####\n\t(1) ATTENDENCE\n\t(2) \n\t(3) \n\t(4)\n\t(5)\n\t(0)EXIT    \n\t:");
   scanf("%d",&choice);
   switch(choice)
    {
    case 1:
    menuatt();
    break;
    case 2:
    
    break;
    case 3:
    
    break;
    case 4:
    
    break;
    case 5:
    break;
    case 0:
    printf("\n\tBYE BYE...\n");
    break;
    default :
    printf("\n\tenter a valid choice\n");
    break;

    } 
   return 0;
   }
int main ()   //main function
{
  int choice; //declaring variable for menue choice
  menu1();
   
  
}

