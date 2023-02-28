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
   
   FILE *fptr=NULL;
   char name[20];
   char ch;
   int i;
   // use appropriate location if you are using MacOS or Linux
   
   fptr = fopen("program.txt","a+");

//    if(!fptr)
//    {
//       printf("Error!");   
//       exit(1);             
// }
    if((fgets(name,20,fptr))!=NULL){
        
        printf("Enter name: ");
        fgets(name, sizeof(name), stdin);  // read string
        printf("Name: ");
        puts(name);    // display string
      printf("Name of Student n=%s", name);
   }
   if((fgets(name,20,fptr))==NULL)
        {
            printf("no record found\n");
            printf("Enter name: ");
            fgets(name, sizeof(name), stdin);  // read string
            printf("Name: ");
            puts(name);    // display string
            printf("Name of Student n=%s", name);   
        }
    
   //
    do {
        ch = fgetc(fptr);
        printf("%c", ch);
 
        // Checking if character is not EOF.
        // If it is EOF stop reading.
    } while (ch != EOF);

        
        
 fprintf(fptr,"%s",name);

   
   fclose(fptr);
   menu_att();

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

   