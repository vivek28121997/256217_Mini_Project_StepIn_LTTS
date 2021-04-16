/**
 * @file wmcs.h
 * @author Vivek Kumar Yadav SFID:256217
 * @brief contains all the headers required.
 * @version 0.1
 * @date 2021-04-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef __WMCS_H__
#define __WMCS_H__

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
//# include <stdio_ext.h> //not supported by the vcode command line
# include <time.h>
//# include <conio.h> //not supported by the linux command line
# include <unistd.h>
//# include <dos.h> //not supported by the linux command line

int main(void);
void start();
void mainmenu();
void Loadsize();
int System_checks();
void WashMenu();
void soak();
void soakTime();
void Temperature();
void inputlog();
void processlog();
char result[4];
int times,count;

#endif  /* #define __WMCS_H__ */
