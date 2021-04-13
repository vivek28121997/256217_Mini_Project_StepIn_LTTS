#include "unity.h"
#include "wmcs.h"

/* Modify these two lines according to the project */
#include "wmcs.h"
#define PROJECT_NAME    "Washing_Machine"

/* Prototypes for all the test functions */
void test_mainmenu(void);
void test_stateOnOff(void);
void test_Washclothes(void);
void test_WashMenu(void);
void test_Soak(void);
void test_getTimesoak(void);
void test_Temperature(void);
void test_viewlog(void);
void test_processlog(void);


/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  //RUN_TEST(test_mainmenu);
  RUN_TEST(test_stateOnOff);
  //RUN_TEST(test_Washclothes);
  //RUN_TEST(test_WashMenu);
  //RUN_TEST(test_Soak);
  //RUN_TEST(test_getTimesoak);
  //RUN_TEST(test_Temperature);
  //RUN_TEST(test_viewlog);
  //RUN_TEST(test_processlog);

  /* Close the Unity Test Framework */
  return UNITY_END();
}

/* Write all the test functions */ 
void test_stateOnOff(void) {
  TEST_ASSERT_EQUAL(mainmenu(), stateOnOff("s"));
  //TEST_ASSERT_EQUAL(Dryclothes(), mainmenu("d"));
}
