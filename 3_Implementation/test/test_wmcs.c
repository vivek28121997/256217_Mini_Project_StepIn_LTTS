/**
 * @file test_wmcs.c
 * @author Vivek Kumar Yadav SFID:256217
 * @brief For the testing of the every systems paramters taken into account.
 * @version 0.1
 * @date 2021-04-16
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include "wmcs.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

/* Prototypes for all the test functions */
void test_System_checks(void);
void test_System_checks1(void);
void test_start(void);
void test_Loadsize(void);
void test_WashMenu(void);
void test_Soak(void);
void test_soakTime(void);
void test_Temperature(void);
void test_inputlog(void);
void test_processlog(void);

char s[10]="s";


/* Write all the test functions */ 
/**
 * @brief To check for system parameter, please use exit command after the system checks run once to head towards the test case evaluation
 * 
 */
void test_System_checks(void) {
  
  int motor_speed=200, water_level=20, water_supply=1, lid_status=1, detergent=1;
   //TEST_ASSERT_TRUE(mainmenu());
  TEST_ASSERT_EQUAL((motor_speed, water_level, water_supply, lid_status,detergent), System_checks(motor_speed, water_level, water_supply, lid_status,detergent));
}
void test_System_checks1(void) {
  
  int motor_speed=1000, water_level=30, water_supply=0, lid_status=0, detergent=0;
   //TEST_ASSERT_TRUE(mainmenu());
  TEST_ASSERT_EQUAL((motor_speed, water_level, water_supply, lid_status,detergent), System_checks(motor_speed, water_level, water_supply, lid_status,detergent));
}
void test_start(void) {
  
   //TEST_ASSERT_EQUAL(1, start()>0);
}
void test_Loadsize(void) {
  
   //TEST_ASSERT_EQUAL(1, start()>0);
}
void test_WashMenu(void) {
  
   //TEST_ASSERT_EQUAL(1, start()>0);
}

/* Start of the application test */
int main()
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test_System_checks);
  RUN_TEST(test_System_checks1);
  RUN_TEST(test_Loadsize);
  RUN_TEST(test_start);
  RUN_TEST(test_WashMenu);
  //RUN_TEST(test_Soak);
  //RUN_TEST(test_getTimesoak);
  //RUN_TEST(test_Temperature);
  //RUN_TEST(test_viewlog);
  //RUN_TEST(test_processlog);

  /* Close the Unity Test Framework */
  return UNITY_END();
}
