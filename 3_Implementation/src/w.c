# include "wmcs.h"

int _tmain(int argc, char* argv[])
 {
  start();
  return 0;
 }
 int main(void) {
 time_t timer = time(NULL);
 printf("current time is %s", ctime(&timer));
 start();
}

void start() {
 char ch;
 printf("\n**************************************************************");
 printf("\n                  * ((Welcome Dear User)) *                   ");
 printf("\n**************************************************************");
 printf("\nPress (s) to Start the washing machine");
 printf("\nPress (e) to shut down the washing machine");
 ch=_getch();
 printf("\n%c",ch);
 if(ch=='s'){
  printf("\nWashing machine is ON.");
  mainmenu();
 }else if(ch=='e'){
   printf("\nWashing machine is Shuting down.");
   sleep(2);
   system("exit");}
  else{
   printf("\nWashing machine is OFF. To Start again, Press (s)");
   start();}
 }

void mainmenu()
{system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n||                     * ((Main Menu)) *                    ||");
 printf("\n**************************************************************");
 printf("\nIf you want to wash clothes, please type w :");
 printf("\nIf you want to go for System checks, please type c :");
 ch=_getch();
 printf("\n%c",ch);
 do
 {
   if(ch=='w')
    Loadsize();
   else if(ch=='c')
    System_checks();

  printf("\nInvalid answer. Type correctly:");
  ch=_getch();
  printf("\n%c",ch);
  mainmenu();
 }
 while(ch!='w' && ch!='c');
}

void System_checks(){
  system("cls");
  char ch;
 printf("\n**************************************************************");
 printf("\n                     * ((System Checks)) *                    ");
 printf("\n**************************************************************");
 
 
 int water_level=20;
 int iv=240;
 if( water_level>=10 && water_level<=60 && iv>=200 && iv<=250){
  printf("\nDetergent status: available\nWater Level status: %d\nVoltage: %d\n",water_level,iv);
  printf("\nSystem Checks: Pass\n");
 }else
 printf("\nSystem Checks: Fail\n");
 sleep(3);
 mainmenu();
}

void Loadsize(){
 system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n                       * ((Load Size menu)) *                      ");
 printf("\n**************************************************************");
 printf("\nPlease select Load capacity for your clothes:");
 printf("\nEnter s(small) if your clothes between 1-2kg:");
 printf("\nEnter m(medium) if your clothes between 2-3kg:");
 printf("\nEnter l(large) if your clothes between 3-4kg:");
 printf("\nEnter a(auto) for machine to determines the load capacity:");
 ch=_getch();
 printf("\n%c",ch);
 while(ch!='s'&& ch!='m'&& ch!='l' && ch!='a'){
  printf("\nInvalid command. Type correctly:");
  ch=_getch();
  printf("\n%c",ch);
  Loadsize();
 }
 result[count]=ch;
 count++;
 WashMenu();
}

void WashMenu(){
 system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n                     * ((Wash menu)) *                        ");
 printf("\n**************************************************************");
 printf("\nPlease select one of the wash menu options for your clothes:");
 printf("\nEnter f(full wash) consist of washing, rinsing and spinning:");
 printf("\nEnter i(rinse & dry) consist of only rinsing and drying:");
 printf("\nEnter r(rinse) consist of only rinsing without washing or drying:");
 printf("\nEnter d(dry) consist of only drying without washing or rinsing :");
 ch=_getch();
  printf("\n%c",ch);
 while(ch!='f' && ch!='i'&& ch!='r' && ch!='d'){
  printf("\nInvalid command. Type correctly:");
  ch=_getch();
  printf("\n%c",ch);
 }
  result[count]=ch;
  count++;
 if(ch=='f'){
  soak();
 }
 else{Temperature();
 }
}

void soak(){
 system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n                      * ((Soak menu)) *                       ");
 printf("\n**************************************************************");
 printf("\nIf you want soak please press (y)YES, else (n)NO:");
 ch=_getch();
  printf("\n%c",ch);
 while(ch!='y' && ch!='n'){
    printf("\nInvalid answer. Type correctly:");
    ch=_getch();
    printf("\n%c",ch);
 }
 if(ch=='y'){
  result[count]=ch;
  count++;
  soakTime();
 }
  Temperature();
 }

void soakTime(){
 system("cls");
 int ch;
  printf("\n**************************************************************");
  printf("\n                     * ((Soak time)) *                        ");
  printf("\n**************************************************************");
  printf("\nPlease enter time between 1-60 minutes: ");
  scanf("%d",&ch);
 if(ch>60){
  printf("\n**************************************************************");
  printf("\n                     *(( Warning!! ))*                        ");
  printf("\n**************************************************************");
  printf("\nThis time is more than 60 minutes. Enter time less than 60 minutes");
  scanf("%d",&ch);
 }
 times = ch;
}

void Temperature(){
 system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n                   * ((Temperature menu)) *                   ");
 printf("\n**************************************************************");
 printf("\nEnter (h) for hot water option in operation");
 printf("\nEnter (c) for cold water option in operation");
 ch=_getch();
 printf("\n%c",ch);
 while(ch!='h' && ch!='c'){
  printf("\nInvalid command. Type correctly:");
  ch=_getch();
  printf("\n%c",ch);
 }
 result[count]=ch;
 inputlog();
}

void inputlog() {
 system("cls");
 printf("\n********************((The Machine is Ready to Work))********************:");
 printf("\n");
 int j=0;
 if(result[j]=='s'){
  printf("\nSmall load in ");
 }else
 if(result[j]=='m'){
  printf("\nMedium load in ");
 }else
 if(result[j]=='l'){
  printf("\nLarge load in ");
 }else
 if(result[j]=='a'){
  printf("\nAutomatic load in ");
 }
 //size
 j++;
 if(result[j]=='f'){
  printf("Full-wash");
 }else
 if(result[j]=='i'){
  printf("Rinse & Dry");
 }else
 if(result[j]=='r'){
  printf("Rinse");
 }else
 if(result[j]=='d'){
  printf("Dry");
 }
 ////wash
 j++;
 if(result[j]=='y'){
  printf(" with Soak is active.");
  printf("\nTime for washing your clothes: 60 mins and for soaking: ");
  printf("%d mins",times);
  printf("\nTotal: ");
  times+=60;
  printf("%d ",times);
  printf("mins");
 }
 else
 { printf(" without Soak is active.");
   printf("\nTime for washing your clothes is: 60 mins");
 }
 ////soak
 j++;
 if(result[j]=='h'){
  printf("\nTemperature of water is hot.\n\n");
 }else if(result[j]=='c')
  {printf("\nTemperature of water is cold.\n\n");}
  
  processlog();
}

void processlog() {
 printf("\n********************((The Machine is in Process))********************:\n");
 
 int j=0;
  sleep(2);
  printf("Please Wait until the Process is Complete.\n");

 j++;
 if(result[j]=='f'){
  printf("Full-wash in process\nPlease wait...\n");
  sleep(3);
  printf("Full-wash is completed\n");
 }else
 if(result[j]=='i'){
  printf("Rinse and Dry in process\nPlease wait...\n");
  sleep(3);
  printf("Rinse and Dry is completed\n");
 }else
 if(result[j]=='r'){
  printf("Rinse in process\nPlease wait...\n");
  sleep(3);
  printf("Rinse is completed\n");
 }else
 if(result[j]=='d'){
  printf("Drying in process\nPlease wait...\n");
  sleep(3);
  printf("Drying is completed\n");
 }
 ////wash
j++;
 if(result[j]=='y'){
  printf("Soaking is in process.\nPlease wait...\n");
  printf("\nTime for soaking: ");
  printf("%d mins\n",times);
  sleep(3);
  printf("Soaking is completed\n");
 }
 ////soak

 j++;
  sleep(2);
  printf("\nWashing is Complete.\n\n");
  start();
}
