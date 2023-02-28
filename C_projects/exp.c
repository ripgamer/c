#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main_exit;

void menu();
void new_entry();
void view_list();
void erase();

struct date{
    int month,day,year;
};
struct {

    char name[60];
    int age;
    char city[60];
    char mail_id[30];
    char room_no[8];
    char father_name[60];
    int father_phone;
    int phone;
    char hostel_name[6];
    char roll_no[10];
    struct date dob;
    }add,check,rem;


int main()
{
  menu();
  return 0;
}

void menu()
{  
    int choice;
    printf("\n\n\t\t\t---------------------------------------------------------------------\n\t\t\t  || ✪ ✪   ℍ 𝕆 𝕊 𝕋 𝔼 𝕃    𝕄 𝔸 ℕ 𝔸 𝔾 𝔼 𝕄 𝔼 ℕ 𝕋   𝕊 𝕐 𝕊 𝕋 𝔼 𝕄   ✪ ✪ ||\n\t\t\t---------------------------------------------------------------------"); 
    printf("\n\n\n\n\n\t  ▓▓▓▓▓▓  𝐖 𝐄 𝐋 𝐂 𝐎 𝐌 𝐄   𝐓 𝐎   𝐓 𝐇 𝐄   𝐌 𝐀 𝐈 𝐍   𝐌 𝐄 𝐍 𝐔  ▓▓▓▓▓▓ ");
    printf("\n\n\t\t1] Add new Student's data\n\t\t2] view all students list\n\t\t3] Removing existing account\n\n\n\n\n\t\t Enter your choice:");
    scanf("%d",&choice);

    switch(choice)
    {

        case 1:new_entry();
        break;
        case 2:view_list();
        break;
        case 3:erase();
        break;
        default:menu();
    }
}


void new_entry()
{
    int choice;
    FILE *ptr,*hostel;

    ptr=fopen("record.txt","a+");
    roll_no:
    
    printf("\n\n\t\t\t|| ADD STUDENTS DATA ||"); 
    printf("\nEnter your roll number:");
    scanf("%s",check.roll_no);
    while(fscanf(ptr,"%s %s %d/%d/%d %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.city, &add.phone, add.mail_id, add.father_name, &add.father_phone, add.room_no, add.hostel_name)!=EOF)
    {
        if (strcmp(check.roll_no,add.roll_no)==0)
            {printf("Students roll no. already in use!");
             goto roll_no;
        }
    }

    strcpy(add.roll_no,check.roll_no);
    printf("\nEnter the name:");
    scanf("%s",add.name);
    printf("\nEnter the date of birth(dd/mm/yyyy):");
    scanf("%d/%d/%d",&add.dob.month,&add.dob.day,&add.dob.year);
    printf("\nEnter the age:");
    scanf("%d",&add.age);
    printf("\nEnter the city:");
    scanf("%s",add.city);
    printf("\nEnter the phone number: ");
    scanf("%d",&add.phone);
    printf("\n Enter your email id :");
    scanf("%s",add.mail_id);
    printf("\n Enter your Father's name:");
    scanf("%s",add.father_name);
    printf("\n Enter your Father's phone no.:");
    scanf("%d",&add.father_phone);
    printf("\n Enter your room no.:");
    scanf("%s",add.room_no);
    printf("\n Enter your hostel name from SVH(AC), SVH(N-AC), SRTH1 :");
    scanf("%s",add.hostel_name);
        fprintf(ptr,"%s %s %d/%d/%d %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, add.phone, add.mail_id, add.father_name, add.father_phone, add.room_no, add.hostel_name);
	
	
    
    fclose(ptr);
    printf("\n\n𝐒𝐭𝐮𝐝𝐞𝐧𝐭 𝐚𝐝𝐝𝐞𝐝 𝐬𝐮𝐜𝐜𝐞𝐬𝐬𝐟𝐮𝐥𝐥𝐲 !\n\n\n");
    add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit:");
    scanf("%d",&main_exit);
    
    if (main_exit==1)
    
        menu();
    else
        {
            printf("\nInvalid!\a");
            goto add_invalid;
        }
}


void view_list()
{
    FILE *view;
    view=fopen("record.txt","r");
    int test=0;
    
    printf("\nROLL NO.\t\tNAME\t\t\tcity\t\t\tPHONE\n");

    while(fscanf(view,"%s %s %d/%d/%d %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.city, &add.phone, add.mail_id, add.father_name, &add.father_phone, add.room_no, add.hostel_name)!=EOF)
       {
           printf("\n%8s\t %10s\t\t\t %10s\t\t %d",add.roll_no,add.name,add.city,add.phone);
           test++;
       }
    fclose(view);
    
    if (test==0)
        {   
            printf("\nNO RECORDS!!\n");}

    view_list_invalid:
     printf("\n\nEnter 1 to go to the main menu and 0 to exit:");
        scanf("%d",&main_exit);
        
        if (main_exit==1)
            menu();
        else
        {
            printf("\nInvalid!\a");
            goto view_list_invalid;
        }
}




void erase()
{
    FILE *old,*newrec;
    int test=0;
    old=fopen("record.txt","r");
    newrec=fopen("new.text","w");
    printf("Enter the roll np. of student whose data you want to delete:");
    scanf("%s",rem.roll_no);
    while (fscanf(old,"%s %s %d/%d/%d %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.city, &add.phone, add.mail_id, add.father_name, &add.father_phone, add.room_no, add.hostel_name)!=EOF)
   {
        if(add.roll_no!=rem.roll_no)
            fprintf(newrec,"%s %s %d/%d/%d %d %s %d %s %s %d %s %s\n",add.roll_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.city, add.phone, add.mail_id, add.father_name, add.father_phone, add.room_no, add.hostel_name);

        else
            {test++;
            printf("\nRecord deleted successfully!\n");
            }
    }
    fclose(old);
    fclose(newrec);
    remove("record.txt");
    rename("new.txt","record.txt");
    if(test==0)
	    printf("\nRecord not found!!\a\a\a");
    erase_invalid:
        printf("\nEnter 0 to try again,1 to return to main menu and 2 to exit:");
        scanf("%d",&main_exit);
        if (main_exit==1)
            menu();
        else if(main_exit==0)
            erase();
        else
        {	
        	printf("\nInvalid!\a");
            goto erase_invalid;
		}
}