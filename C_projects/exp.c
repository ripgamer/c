#include <stdio.h>
#include <stdlib.h>


int main()
{
   char name[20];
   char ch;
   FILE *fptr = NULL;
   int i;
   // use appropriate location if you are using MacOS or Linux
   
   fptr = fopen("program.txt","a+");

   if(fptr == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
    if(fgets(name,20,fptr)==NULL ||fgets(name,20,fptr)!=NULL){
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

   return 0;
}