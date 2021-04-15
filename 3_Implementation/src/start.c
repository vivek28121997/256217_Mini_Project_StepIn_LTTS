# include "wmcs.h"

void start() {
 char ch;
 printf("\n**************************************************************");
 printf("\n                  * ((Welcome Dear User)) *                   ");
 printf("\n**************************************************************");
 printf("\nPress (s) to Start the washing machine");
 printf("\nPress (e) to shut down the washing machine");
 ch= getchar();
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