#include "wmcs.h"

int _tmain(int argc, char* argv[])
 {
  stateOnOff();
  return 0;
 }
 int main(void) {
 time_t timer = time(NULL);
 printf("current time is %s", ctime(&timer));
 stateOnOff();
}

void stateOnOff() {
 char ch;
 printf("\n**************************************************************");
 printf("\n                  * ((Welcome Dear User)) *                   ");
 printf("\n**************************************************************");
 printf("\nPress (s) to Start the washing machine");
 ch=_getch();
 printf("\n%c",ch);
 if(ch=='s'){
  printf("\nWashing machine is ON.");
  mainmenu();
 }else
  printf("\nWashing machine is OFF. To Start again, Press (s)");
  stateOnOff();
 }

void mainmenu()
{system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n||                     * ((Main Menu)) *                    ||");
 printf("\n**************************************************************");
 printf("\nIf you want to wash clothes, please type w :");
 printf("\nIf you want to dry clothes,please type d :");
 ch=_getch();
 printf("\n%c",ch);
 do
 {
   if(ch=='w')
    Washclothes();
   else if(ch=='d')
    Dryclothes();
  printf("\nInvalid answer. Type correctly:");
  ch=_getch();
  printf("\n%c",ch);
  mainmenu();
 }
 while(ch!='w' && ch!='d');
}

void Dryclothes(){
  system("cls");
  char ch;
 printf("\n**************************************************************");
 printf("\n                       * ((Size menu)) *                      ");
 printf("\n**************************************************************");
 printf("\nPlease select size of the your clothes:");
 printf("\nEnter s(small) if your cloths between 1-2kgr:");
 printf("\nEnter m(medium) if your cloths between 2-3kgr:");
 printf("\nEnter l(large) if your cloths between 3-4kgr:");
 printf("\nEnter x(Eatra large) if your cloths more than 4kgr:");
 printf("\nEnter f(Free load) if machine determines the load capacity:");
 ch=_getch();
 printf("\n%c",ch);
 while(ch!='s'&& ch!='m'&& ch!='l' && ch!='x'&& ch!='f'){
  printf("\nInvalid answer. Type correctly:");
  ch=_getch();
  printf("\n%c",ch);
  Dryclothes();
 }
 result[count]=ch;
 count++;
 WashMenu();
}

void Washclothes(){
 system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n                       * ((Size menu)) *                      ");
 printf("\n**************************************************************");
 printf("\nPlease select size of the your clothes:");
 printf("\nEnter s(small) if your cloths between 1-2kgr:");
 printf("\nEnter m(medium) if your cloths between 2-3kgr:");
 printf("\nEnter l(large) if your cloths between 3-4kgr:");
 printf("\nEnter x(Eatra large) if your cloths more than 4kgr:");
 printf("\nEnter f(Free load) if machine determines the load capacity:");
 ch=_getch();
 printf("\n%c",ch);
 while(ch!='s'&& ch!='m'&& ch!='l' && ch!='x'&& ch!='f'){
  printf("\nInvalid answer. Type correctly:");
  ch=_getch();
  printf("\n%c",ch);
  Washclothes();
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
 printf("\nEnter f(full wash) consist of washing ,rinsing and spinning:");
 printf("\nEnter w(wash) consist of only washing without rinsing or spinning:");
 printf("\nEnter r(rinse) consist of only rinsing without washing or spinning:");
 printf("\nEnter s(spin) consist of only spinning without washing or rinsing :");
 ch=_getch();
  printf("\n%c",ch);
 while(ch!='f' && ch!='w'&& ch!='r' && ch!='s'){
  printf("\nInvalid answer. Type correctly:");
  ch=_getch();
  printf("\n%c",ch);
 }
  result[count]=ch;
  count++;
 if(ch=='f' || ch=='w'){
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
  getTimesoak();
 }
  Temperature();
 }

void getTimesoak(){
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
 printf("\nEnter h(hot) if you want hot water for operation");
 printf("\nEnter c(cold) if you want cold water for operation");
 ch=_getch();
 printf("\n%c",ch);
 while(ch!='h' && ch!='c'){
  printf("\nInvalid answer. Type correctly:");
  ch=_getch();
  printf("\n%c",ch);
 }
 result[count]=ch;
 viewlog();
}

void viewlog() {
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
 if(result[j]=='x'){
   printf("\nExtra-large load in ");
 }else
 if(result[j]=='f'){
  printf("\nFree-load load in ");
 }
 //size
 j++;
 if(result[j]=='f'){
  printf("Full-wash");
 }else
 if(result[j]=='w'){
  printf("Wash");
 }else
 if(result[j]=='r'){
  printf("Rinse");
 }else
 if(result[j]=='s'){
  printf("Spin");
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
  printf("Full-wash in process\nPlease wait...");
  sleep(3);
  printf("Full-wash is completed\n");
 }else
 if(result[j]=='w'){
  printf("Wash in process\nPlease wait...");
  sleep(3);
  printf("Wash is completed\n");
 }else
 if(result[j]=='r'){
  printf("Rinse in process\nPlease wait...");
  sleep(3);
  printf("Rinse is completed\n");
 }else
 if(result[j]=='s'){
  printf("Spin in process\nPlease wait...");
  sleep(3);
  printf("Spin is completed\n");
 }
 ////wash
j++;
 if(result[j]=='y'){
  printf("Soaking is in process.\nPlease wait...");
  sleep(3);
  printf("Soaking is completed\n");
  //printf("\nTime for soaking: ");
  //printf("%d mins",times);
  //times+=60;
  //printf("%d ",times);
  //printf("mins");
 }
 ////soak

 j++;
  sleep(2);
  printf("\nWashing is Complete.\n\n");
  stateOnOff();
}