#include "unity.h"
#include <calc.h>
#define PROJECT_NAME "Calculator"

void test_add(void);
void test_sub(void);
void test_mul(void);
void test_divi(void);
void test_mod(void);
void test_powe(void);
void test_fact(void);
void test_xorop(void);
void test_max(void);
void test_min(void);
void test_permutation(void);
void test_combination(void);

/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}
int main(){
  UNITY_BEGIN();
  RUN_TEST(test_add);
  RUN_TEST(test_sub);
  RUN_TEST(test_mul);
  RUN_TEST(test_divi);
  RUN_TEST(test_mod);
  RUN_TEST(test_powe);
  RUN_TEST(test_fact);
  RUN_TEST(test_xorop);
  RUN_TEST(test_max);
  RUN_TEST(test_min);
  RUN_TEST(test_permutation);
  RUN_TEST(test_combination);
  return UNITY_END();
}
void test_add(void) {
  TEST_ASSERT_EQUAL(9, add(4, 5));
  TEST_ASSERT_EQUAL(100, add(50, 50));
}
void test_sub(void) {
  TEST_ASSERT_EQUAL(2, subtract(5, 3));
  TEST_ASSERT_EQUAL(10, subtract(100, 90));
}
void test_mul(void) {
  TEST_ASSERT_EQUAL(30, mul(5, 6));
  TEST_ASSERT_EQUAL(100, mul(10, 10));
}
void test_divi(void) {
  TEST_ASSERT_EQUAL(2, divi(4, 2));
  TEST_ASSERT_EQUAL(1, divi(5, 5));
}
void test_mod(void){
  TEST_ASSERT_EQUAL(0, (10, 5));
  TEST_ASSERT_EQUAL(3, (3, 4));
}
void test_powe(void){
  TEST_ASSERT_EQUAL(2, (2, 1));
  TEST_ASSERT_EQUAL(27, (3, 3));
}
void test_fact(void){
  TEST_ASSERT_EQUAL(6, (3));
  TEST_ASSERT_EQUAL(120, (5));
}
void test_xorop(void){
  TEST_ASSERT_EQUAL(7, (3, 4));
  TEST_ASSERT_EQUAL(0, (4, 4));
}
void test_max(void){
  TEST_ASSERT_EQUAL(10, (10, 7));
  TEST_ASSERT_EQUAL(200, (100, 200));
}
void test_min(void){
  TEST_ASSERT_EQUAL(7, (10, 7));
  TEST_ASSERT_EQUAL(100, (100, 200));
}
void test_permutation(void){
  TEST_ASSERT_EQUAL(12, (4, 2));
  TEST_ASSERT_EQUAL(30, (6, 2));
}
void test_combination(void){
  TEST_ASSERT_EQUAL(6, (4, 2));
  TEST_ASSERT_EQUAL(15, (6, 2));
}
