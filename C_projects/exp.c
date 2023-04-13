<<<<<<< HEAD
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
=======
#include<stdio.h> 
#include<string.h> 
#include<stdlib.h>
#define MAX_ROOMS 30
#define MAX_NAME 50
struct acc_holder
{
long int acc_num;
char name[30];
char bal;
}b[6]; 
int staff()
{ void abc();
int i;
for(i=0;i<10;i++)
{
printf("\n%d] Enter name = ",i+1);
scanf("%s",b[i].name);
printf("\n Enter adhar number = ");
scanf("%ld",&b[i].acc_num);
printf("\n Enter position = ");
scanf("%s",&b[i].bal);
}
for (i = 0; i < 10; i++)
{printf("\n\t%d] Name : %s",i+1,b[i].name);
printf("\n\t ADHAR NO: %ld \n\n", b[i].acc_num);
printf("\n\t position : %s \n\n",b[i].bal);
} 
room();// admin function 
return 0;
}
 void abc(){
  int x,i;
 char name;
  printf("\n\n\t1]search by name \n\n\t2] search by position\n\t: ");
  scanf("%d",&x);
  switch(x)
 {  case 1:
     printf("\n\n\tENTER NAME = ");
     scanf("%s",name);
    for(i=0;i<6;i++){
    if (strcmp(name,b[i].name)==0)
      printf("\n\n\tthe name is %s",b[i].name);
      printf("\n\n\tthe adhar no. is%ld",b[i].acc_num);
      printf("the position is :%s",b[i].bal);
    }}
         
}
>>>>>>> 03c30b043f1cefdbcdf6947490f84d1d0b0e180d

 int menu(),room(),check(),lunch(),k(),staff(),china(),drink();//differend function
 void admin(),nasta(); 
 int room()// all data of rooms storing {}
{  
      int ch;
    printf("-----------------------------------------");     
    printf("\n## Ⓦ Ⓔ Ⓛ Ⓒ Ⓞ Ⓜ Ⓔ Ⓣ Ⓞ Ⓐ Ⓓ Ⓜ Ⓘ Ⓝ Ⓟ Ⓐ Ⓝ Ⓔ Ⓛ ##\n------------------------------------------\n\t[1] ᴇɴᴛᴇʀ ɴᴇᴡ sᴛᴀғғ ᴅᴇᴛᴀɪʟs  \n\t[2] sᴇᴀʀᴄʜ ᴇxɪsᴛɪɴɢ sᴛᴀғғ ᴅᴇᴛᴀɪʟs\n\n\t(0)BACK \n\n");
    printf("------------------------------------------\n\t:"); 
  scanf("%d",&ch); 
  switch(ch) 
  { 
  case 1: 
     staff();
  break; 
     case 2:
    abc();
     break;
  case 0: 
  menu(); 
 break; 
  default:
  room();
  break; 
    } 
  return 0; 
 } 
 int menu() //main menu function 
  {   
  int ch; 
     printf("\n\n****************\n");
	printf("*                                          *\n");
	printf("*       -----------------------------      *\n");
	printf("*            𝓦𝓔𝓛𝓒𝓞𝓜𝓔 𝓣𝓞 𝓗𝓞𝓣𝓔𝓛 𝓜𝓘𝓣\n\t\t(𝔹-𝕋𝕖𝕔𝕙 ℍ𝕠𝕥𝕖𝕝𝕨𝕒𝕝𝕒)  \t   *\n");
	printf("*       -----------------------------      *\n");
	printf("*                                          *\n");
	printf("****************\n\n\n");
    printf("-----------------------------------------");
    printf("\n\n>>>\tFor ADMIN access enter --> [1] <<<\n");
    printf("-----------------------------------------");
    printf("\n>>>\tFor USER access enter --> \t<<<");
    printf("\n\n\t[2] ENQUERY RELATED ROOMS\n\n\t[3] LUNCH DINNER \n\n\t[4] DRINKS \n\n ");
    printf("-----------------------------------------");
    printf("\n\t>> ");
        scanf("%d",&ch); 
  switch(ch) 
  { 
 case 1: 
     admin ();
  // redirect to Hotel 
 break; 
case 2: 
  k();
 break; 
 case 3:
     china();
     break;
    case 4:
    drink();
    break; 
  default : 
  menu(); 
  break; 
  
  }  
  return 0; 
  } 
  
 //admin function 
 void admin(){
        char pass[]="mitan";
        char pass1[10];
        printf(".........................................");
       printf("\n\n\tℍ𝔼𝕃𝕃𝕆! 𝕎𝔼𝕃ℂ𝕆𝕄𝔼 𝕋𝕆 𝔸𝔻𝕄𝕀ℕ ℙ𝔸ℕ𝔼𝕃 \n");
       printf(".........................................");    
       printf("\n\ℰ𝒩𝒯ℰℛ 𝒯ℋℰ 𝒫𝒜𝒮𝒮𝒲𝒪ℛ𝒟 = ");
       scanf("%s",pass1);
      if(strcmp(pass,pass1)==0){ 
       printf("\n\n\t*ACCESS GRANTED!*\n");
      room();
      }
     else{  printf("\n\n\t wrong password..try again");

    }}

 int main ()//main function 
 { 
   int k();
    void nasta();
    int drink();
  int choice; //declaring variable 
 
   void initRooms();
void printRooms();
void bookRoom();
menu();
 }   
int drink()
{
<<<<<<< HEAD
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
=======
 int a,qty,rate,v,total;
 printf("\n\n\t<<<< MENU CARD >>>\n\t*Select your drink* \n\n\t1].COFFEE 10ru \n\t2].TEA 5ru\n\t3].COLD COFFEE 15ru\n\t4].MILK SHAKE 25ru\n\t5].STALK 30ru\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected Coffee.\n Enter the quantity :\n\t");
    scanf("%d",&qty);
    rate=10;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    drink();
    break;
  case 2:
    printf("\nYou have selected Tea.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=5;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    drink();
    break;
  case 3:
    printf("\nYou have selected Cold coffee.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=15;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    drink();
    break;
  case 4:
    printf("\nYou have selected Milk shake.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=25;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    drink();
    break;
  case 5:
    printf("\nYou have selected Stalc.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=30;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    drink();
    break;
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
 }
return 0;
}
struct Room {
    int roomNumber;
    int isBooked;
    int p;
    char guestName[MAX_NAME];
};
 struct Room rooms[MAX_ROOMS];
int k() {
    int option,p;
    initRooms();

    do {
        printf("\n\n\tHotel Room Booking System\n");
        printf("\t1.] View Rooms\n");
        printf("\t2.] Book Room\n");
        printf("\t3.] Quit\n");
        printf("\n\tEnter your option: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printRooms();
                break;
            case 2:
                bookRoom();
                break;
            case 3:
                printf("\n\tExiting program...\n");
                menu();
                break;
            default:
                printf("\n\t*Invalid option. Try again.....*\n");
                break;
        }
    } while (option != 3);

    return 0;
}

// Initializes rooms to default values
void initRooms() {
    int i;
    for (i = 0; i < MAX_ROOMS; i++) {
        rooms[i].roomNumber = i + 1;
        rooms[i].isBooked = 0;
        strcpy(rooms[i].guestName, "");
>>>>>>> 03c30b043f1cefdbcdf6947490f84d1d0b0e180d
    }
}

// Prints current status of rooms
void printRooms() {
    int i;
    printf("*****************");
    printf("\n|  Room No.\t|  Booked\t| Guest Name    |\n");
    for (i = 0; i < MAX_ROOMS; i++) {
        printf(".................................................\n");
        printf("|\t%d\t|\t%d\t|\t%s\t|\n", rooms[i].roomNumber, rooms[i].isBooked, rooms[i].guestName,rooms[i].p);
        printf(".................................................\n");
    }
}

<<<<<<< HEAD
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
=======
// Allows user to book a room
void bookRoom() {
    int roomNumber, i,p;
    char guestName[MAX_NAME];

    printf("\n\t*Enter room number: ");
    scanf("%d", &roomNumber);

    roomNumber--; // Array index starts at 0
    if (rooms[roomNumber].isBooked == 1) {
        printf("\n\t*Room is already booked.*\n");
    } else {
        rooms[roomNumber].isBooked = 1;
        printf("\n\tEnter your name: ");
        scanf("%s", guestName);
        printf("\n\tENTER ADHAR NUMBER :\n\t");
        scanf("%d",&p);
        strcpy(rooms[roomNumber].guestName, guestName);
        printf("\n\n\tRoom booked successfully.\n");
    }
}
int china()
{
 int a,qty,rate,v,total;
 printf("\n\n\t<<<< MENU CARD >>>\n\t*Select your dish* \n\n\t1].TANDUR WITH PANIR 150ru \n\t2].CHICKEN BIRYANI 200ru\n\t3].VEG THALI 150ru\n\t4].CHIKAN HANDI 250ru\n\t5].DAL BATI 300ru\n");
 scanf("%d",&a);
 switch(a)
 {
  case 1:
    printf("\nYou have selected tandur with panir.\n Enter the quantity :\n\t");
    scanf("%d",&qty);
    rate=150;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    drink();
    break;
  case 2:
    printf("\nYou have selected Chicken biryani.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=200;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    drink();
    break;
  case 3:
    printf("\nYou have selected veg thali.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=150;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    drink();
    break;
  case 4:
    printf("\nYou have selected Chicken handi.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=250;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    drink();
    break;
  case 5:
    printf("\nYou have seleccted dal bati.\n Enter the quantity :");
    scanf("%d",&qty);
    rate=300;
    total=qty*rate;
    printf("\n pay Total amount :%d\n\t:",total);
    scanf("%d",&v);
    if(v==total)
    printf("\n\n\torder placed ! thank you!");
    else
    printf("\n\tsorry try again\n\n");
    china();
    break;
  default:
    printf("\nSorry Unavailable...%ds",a);
    break;
 }
return 0;
}
>>>>>>> 03c30b043f1cefdbcdf6947490f84d1d0b0e180d
