/**
 * @file inputlog.c
 * @author Vivek Kumar Yadav SFID:256217
 * @brief to display the user inputs opted for the washing-process 
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */
# include "wmcs.h"

void inputlog() {
 printf("\n********************((The Machine is Ready to Work))********************:\n");
 printf("\n");
 
 int j=0;
 j++;
 if(result[j]=='s'){
  printf("\nSmall load in ");
 }else
 if(result[j]=='m'){
  printf("\nMedium load in ");
 }else
 if(result[j]=='l'){
  printf("\nLarge load in ");
 }else
 if(result[j]=='a'){
  printf("\nAutomatic load in ");
 }
 //size
 j++;
 if(result[j]=='f'){
  printf("Full-wash");
 }else
 if(result[j]=='i'){
  printf("Rinse & Dry");
 }else
 if(result[j]=='r'){
  printf("Rinse");
 }else
 if(result[j]=='d'){
  printf("Dry");
 }
 ////wash
 j++;
 if(result[j]=='y'){
  printf(" with Soak is active.");
  printf("\nTime for washing your clothes: 20 mins and for soaking: ");
  printf("%d mins",times);
  printf("\nTotal: ");
  printf("%d ",times+20);
  printf("mins");
 }
 else
 { printf(" without Soak is active.");
   printf("\nTime for washing your clothes is: 20 mins");
 }
 ////soak
 j++;
 if(result[j]=='h'){
  printf("\nTemperature of water is hot.\n\n");
 }else if(result[j]=='c')
  {printf("\nTemperature of water is cold.\n\n");}
  
  System_checks();
 }