# include "wmcs.h"

void mainmenu()
{system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n||                     * ((Main Menu)) *                    ||");
 printf("\n**************************************************************");
 printf("\nIf you want to wash clothes, please type w :");
 printf("\nIf you want to go for System checks, please type c :");
 ch= getchar();
 printf("\n%c",ch);
 do
 {
   if(ch=='w')
    Loadsize();
   else if(ch=='c')
    System_checks();

  printf("\nInvalid answer. Type correctly:");
  ch= getchar();
  printf("\n%c",ch);
  mainmenu();
 }
 while(ch!='w' && ch!='c');
}