/**
 * @file processlog.c
 * @author Vivek Kumar Yadav SFID:256217
 * @brief to display the ongoing process leads.
 * @version 0.1
 * @date 2021-04-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */
# include "wmcs.h"

void processlog() {
 printf("\n********************((The Machine is in Process))********************:\n");
 
 int j=0;
  sleep(2);
  printf("Please Wait until the Process is Complete.\n");

 j++;
 if(result[j]=='f'){
  printf("Full-wash in process\nPlease wait...\n");
  sleep(3);
  printf("Full-wash is completed\n");
 }else
 if(result[j]=='i'){
  printf("Rinse and Dry in process\nPlease wait...\n");
  sleep(3);
  printf("Rinse and Dry is completed\n");
 }else
 if(result[j]=='r'){
  printf("Rinse in process\nPlease wait...\n");
  sleep(3);
  printf("Rinse is completed\n");
 }else
 if(result[j]=='d'){
  printf("Drying in process\nPlease wait...\n");
  sleep(3);
  printf("Drying is completed\n");
 }
 ////wash
j++;
 if(result[j]=='y'){
  printf("Soaking is in process.\nPlease wait...\n");
  printf("\nTime for soaking: ");
  printf("%d mins\n",times);
  sleep(3);
  printf("Soaking is completed\n");
 }
 ////soak

 j++;
  sleep(2);
  printf("\nWashing is Complete.\n\n");
  start();
}
