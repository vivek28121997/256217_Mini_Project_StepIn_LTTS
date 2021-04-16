/**
 * @file w.c
 * @author Vivek Kumar Yadav SFID:256217
 * @brief to allow user to have options for washing modes.
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
# include "wmcs.h"

void WashMenu(){
 system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n                     * ((Wash menu)) *                        ");
 printf("\n**************************************************************");
 printf("\nPlease select one of the wash menu options for your clothes:");
 printf("\nEnter f(full wash) consist of washing, rinsing and spinning:");
 printf("\nEnter i(rinse & dry) consist of only rinsing and drying:");
 printf("\nEnter r(rinse) consist of only rinsing without washing or drying:");
 printf("\nEnter d(dry) consist of only drying without washing or rinsing :");
 ch= getchar();
  printf("\n%c",ch);
 while(ch!='f' && ch!='i'&& ch!='r' && ch!='d'){
  printf("\nInvalid command. Type correctly:");
  ch=getchar();
  printf("\n%c",ch);
 }
  result[count]=ch;
  count++;
 if(ch=='f'){
  soak();
 }
 else{Temperature();
 }
}