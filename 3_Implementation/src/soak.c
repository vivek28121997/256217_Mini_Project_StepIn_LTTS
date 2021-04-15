# include "wmcs.h"

void soak(){
 system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n                      * ((Soak menu)) *                       ");
 printf("\n**************************************************************");
 printf("\nIf you want soak please press (y)YES, else (n)NO:");
 ch=getchar();
  printf("\n%c",ch);
 while(ch!='y' && ch!='n'){
    printf("\nInvalid answer. Type correctly:");
    ch= getchar();
    printf("\n%c",ch);
 }
 if(ch=='y'){
  result[count]=ch;
  count++;
  soakTime();
 }
  Temperature();
 }