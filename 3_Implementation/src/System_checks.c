# include "wmcs.h"

void System_checks(){
  system("cls");
  char ch;
 printf("\n**************************************************************");
 printf("\n                     * ((System Checks)) *                    ");
 printf("\n**************************************************************");
 
 
 int water_level=20;
 int iv=240;
 if( water_level>=10 && water_level<=60 && iv>=200 && iv<=250){
  printf("\nDetergent status: available\nWater Level status: %d\nVoltage: %d\n",water_level,iv);
  printf("\nSystem Checks: Pass\n");
 }else
 printf("\nSystem Checks: Fail\n");
 sleep(3);
 mainmenu();
}