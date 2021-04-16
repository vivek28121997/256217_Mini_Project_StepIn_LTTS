/**
 * @file soakTime.c
 * @author Vivek Kumar Yadav SFID:256217
 * @brief to allow user to decide the soaking time period.
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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