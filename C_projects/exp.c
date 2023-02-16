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
