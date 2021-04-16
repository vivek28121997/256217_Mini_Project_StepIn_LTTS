/**
 * @file System_checks.c
 * @author Vivek Kumar Yadav SFID:256217
 * @brief to have a systems checks based on sensor feedback for the safely executing the further process flow.
 * @version 0.1
 * @date 2021-04-14
 * 
 * @copyright Copyright (c) 2021
 * 
 */
# include "wmcs.h"

int iv=240;

int System_checks(int motor_speed, int water_level, int water_supply, int lid_status,int detergent){
  system("cls");
 printf("\n**************************************************************");
 printf("\n                     * ((System Checks)) *                    ");
 printf("\n**************************************************************");

lid_status=1;
int j=0;
 if(result[j]=='s'){
  water_level=10;
 }else
 if(result[j]=='m'){
  water_level=15;
 }else
 if(result[j]=='l'){
  water_level=20;
 }
 //size
 j++;
 if(result[j]=='f'){
  motor_speed=200;
  detergent=1;
  water_supply=0;
 }else
 if(result[j]=='i'){
  motor_speed=800;
  water_supply=1;
  detergent=0;
 }else
 if(result[j]=='r'){
  motor_speed=1000;
  water_supply=1;
  detergent=0;
 }else
 if(result[j]=='d'){
  motor_speed=1500;
  water_supply=0;
  detergent=0;
 }
 ////wash

  char *det;
  char *supply;
  if(water_supply==1){
    supply="Available";
  }else 
  supply="Unavailable";
  if(detergent==1){
    det="Available";
  }else
  det="Unavailable";
  
 if( water_level>=10 && water_level<=20 && iv>=190 && iv<=250 && lid_status==1){
  printf("\nWater Supply:%s\nDetergent status: %s \nWater Level status: %d\nVoltage: %d\n",supply,det,water_level,iv);
  printf("\nSystem Checks: Pass\n");
  processlog();
 }else if( water_level<=10 && water_level>=20 && iv<=190 && iv>=250 && lid_status==0){
 printf("\nSystem Checks: Fail\n");
 start();}
 sleep(3);
 return motor_speed, water_level, water_supply, lid_status, detergent;
}