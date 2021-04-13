#ifndef __WMCS_H__
#define __WMCS_H__

# include <stdio.h>
# include <stdlib.h>
//# include <stdio_ext.h>
# include <time.h>
# include <conio.h>
# include <unistd.h>
# include <dos.h>

void stateOnOff();
void mainmenu();
void Washclothes();
void Dryclothes();
void WashMenu();
void soak();
void getTimesoak();
void Temperature();
void viewlog();
void processlog();
char result[4];
int main(void);
int times,count;

#endif  /* #define __WMCS_H__ */
