# include "wmcs.h"

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
 ch = getchar();
 printf("\n%c",ch);
 while(ch!='s'&& ch!='m'&& ch!='l' && ch!='a'){
  printf("\nInvalid command. Type correctly:");
  ch= getchar();
  printf("\n%c",ch);
  Loadsize();
 }
 result[count]=ch;
 count++;
 WashMenu();
}
