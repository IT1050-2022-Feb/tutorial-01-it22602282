/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  // variable declaration
  int num1, num2;
  float avg;

  // input mark 1
  printf("Input Number 1: "); // prompt
  scanf("%d", &num1);

  // input mark 2
  printf("Input Number 2: "); // prompt
  scanf("%d", &num2);

  // average calculation
  avg = (num1 + num2) / 2.0;

  // output average
  printf("Average mark is: %.3f\n", avg);
  
  return 0;
}

