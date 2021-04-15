#include "wmcs.h"

/* Start of the application */
int _tmain(int argc, char* argv[])
 {
  start();
  return 0;
 }

 int main(void) {
 time_t timer = time(NULL);
 printf("current time is %s", ctime(&timer));
 start();
  
  return 0;
}
