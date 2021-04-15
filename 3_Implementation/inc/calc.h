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
* @param[in] a 
* @param[in] b 
* @return Result of operand1 + operand2
*/
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divi(int a,int b);
int mod(int a,int b);
int powe(int a,int b);
int fact(int a);
int xorop(int a,int b);
int max(int a,int b);
int min(int a,int b);
int permutation(int a,int b);
int combination(int a,int b);
void operations();


#endif  /* #define __CALCULATOR_OPERATIONS_H__ */