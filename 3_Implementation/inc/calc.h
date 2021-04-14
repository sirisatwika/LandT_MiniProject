/** 
* @file calculator_operations.h
* Calculator application with 4 mathematical operations
*
*/
#ifndef __CALC_H__
#define __CALC_H__

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


/**
*  adds the operand1 and operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 + operand2
*/

void add();
void sub();
void mul();
void divi();
void mod();
void powe();
int fact();
void xor();
void max();
void min();
//void permutation();
//void combination();
void operations();
/*int add(int operand1, int operand2);

/**
*  subtracts the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 - operand2
*/
/*int subtract(int operand1, int operand2);

/**
*  multiply the operand1, operand2 and returns the result
* @param[in] operand1 
* @param[in] operand2 
* @return Result of operand1 * operand2
*/
/*int multiply(int operand1, int operand2);


/**
* divides the operand1 by operand2 and returns the result 
* @param[in] operand1 
* @param[in] operand2 
* @return integer value of the operand1 / operand2
* @note returns 0 for divide by 0 error
*/
/*int divide(int operand1, int operand2);*/

#endif  /* #define __CALCULATOR_OPERATIONS_H__ */