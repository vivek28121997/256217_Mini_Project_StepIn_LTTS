# include "wmcs.h"

void Temperature(){
 system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n                   * ((Temperature menu)) *                   ");
 printf("\n**************************************************************");
 printf("\nEnter (h) for hot water option in operation");
 printf("\nEnter (c) for cold water option in operation");
 ch=getchar();
 printf("\n%c",ch);
 while(ch!='h' && ch!='c'){
  printf("\nInvalid command. Type correctly:");
  ch=getchar();
  printf("\n%c",ch);
 }
 result[count]=ch;
 inputlog();
}