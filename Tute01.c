/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1, mark2, avgM;
  
  printf("Enter mark 1: ");
  scanf("%d",&mark1);

  printf("Enter mark 2: ");
  scanf("%d",&mark2);

  avgM = mark1 + mark2;

  printf("The average mark is %d",avgM);
  
  return 0;
}

