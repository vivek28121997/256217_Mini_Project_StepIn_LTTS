/**
 * @file soak.c
 * @author Vivek Kumar Yadav SFID:256217
 * @brief to facilitate the user for automated soak option.
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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