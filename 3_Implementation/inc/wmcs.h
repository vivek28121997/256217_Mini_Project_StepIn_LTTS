#ifndef __WMCS_H__
#define __WMCS_H__

# include <stdio.h>
# include <stdlib.h>
//# include <stdio_ext.h>
# include <time.h>
# include <conio.h>
# include <unistd.h>
# include <dos.h>

int main(void);
void start();
void mainmenu();
void Loadsize();
void System_checks();
void WashMenu();
void soak();
void soakTime();
void Temperature();
void inputlog();
void processlog();
char result[4];
int times,count;

#endif  /* #define __WMCS_H__ */
