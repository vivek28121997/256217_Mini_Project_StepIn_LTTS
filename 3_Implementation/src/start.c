/**
 * @file start.c
 * @author Vivek Kumar Yadav SFID:256217
 * @brief 
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
# include "wmcs.h"
/**
 * @brief System initiation command console
 * 
 */
void start() {
 char ch;
 printf("\n**************************************************************");
 printf("\n                  * ((Welcome Dear User)) *                   ");
 printf("\n**************************************************************");
 printf("\nPress (s) to Start the washing machine:");
 printf("\nPress (e) to shut down the washing machine: \n");
 ch = getchar();
 printf("\n%c",ch);
 do
 {
   if(ch=='s'){
  printf("\nWashing machine is ON.");
  Loadsize();
 }else if(ch=='e'){
   printf("\nWashing machine is Shuting down.");
   sleep(2);
   system("exit");}

  printf("\nInvalid answer. Type correctly:");
  ch= getchar();
  printf("\n%c",ch);
 }
 while(ch!='s'&&ch!='e');
 }