#include <stdio.h>
#include <string.h>
int menu1(),menu_att(); //declaring diffrent menu 
int show_att();
int menu_att()          //attendence function
{
  int choice;
   printf("\n\n\n\t##### ATTENDENCE #####\n\t(1) \n\t(0)EXIT \n\t:");
   scanf("%d",&choice);
   switch(choice)
    {
    case 1:
    show_att();
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
int show_att() //to print attendence of student from a text file
{
   
   FILE *f_ptr=NULL;
   if (!f_ptr) //if file not exsist
       {
        FILE *f_ptr=NULL;
        f_ptr = fopen("db.txt","a");
        //fprintf(f_ptr,"\n");
        //f_ptr = fopen("db.txt","r");
        //char f_print[500];
        //fgets(f_print,500,f_ptr);
        //printf("%s",f_print);
        //fclose(f_ptr);
        /*printf("\n\tcreat a db.txt file\n");*/
        menu_att();
       }
    //else 
    //{
    if(f_ptr == NULL)
    {
      printf("\n\tno data avalable"); //error msg for no data availble
      show_att(); //back to attendence menu
    }
    else
    {
     f_ptr = fopen("db.txt","r");
     char f_print[500];
     fgets(f_print,500,f_ptr);
     printf("%s",f_print);
     fclose(f_ptr);
     menu_att(); //back to attendence menu
    }
    //}
  return 0;
    

}


int menu1()          //main menu function
{
   int choice;
   printf("\n\n\n\t##### MENU #####\n\t(1) ATTENDENCE\n\t(2) \n\t(3) \n\t(4)\n\t(5)\n\t(0)EXIT    \n\t:");
   scanf("%d",&choice);
   switch(choice)
  {
    case 1:
    menu_att();
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

//maintio function
int main ()
{
  int choice; //declaring variable for menue choice
  menu1();
   
  
}

   