/**
 * @file Loadsize.c
 * @author Vivek Kumar Yadav SFID:256217
 * @brief 
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
# include "wmcs.h"
/**
 * @brief For determining the Load capacity by the user
 * 
 */
void Loadsize(){
 system("cls");
 char ch;
 printf("\n**************************************************************");
 printf("\n                       * ((Load Size menu)) *                      ");
 printf("\n**************************************************************");
 printf("\nPlease select Load capacity for your clothes: ");
 printf("\nEnter s(small) if your clothes between 1-2kg: ");
 printf("\nEnter m(medium) if your clothes between 2-3kg: ");
 printf("\nEnter l(large) if your clothes between 3-4kg: ");
 printf("\nEnter a(auto) for machine to determines the load capacity: ");
 ch = getchar();
 printf("\n%c",ch);
 while(ch!='s'&& ch!='m'&& ch!='l' && ch!='a'){
  printf("\nInvalid command. Type correctly: ");
  ch= getchar();
  printf("\n%c",ch);
  Loadsize();
 }
 result[count]=ch;
 count++;
 WashMenu();
}
