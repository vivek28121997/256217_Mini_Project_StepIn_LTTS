# include "wmcs.h"


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