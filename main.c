/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> 
int main() { 
 float mark1, mark2, mark3, mark4, mark5, total, percentage;
 printf("Enter the marks for Subject 1: ");
 scanf("%f", &mark1);
 printf("Enter the marks for Subject 2: ");
 scanf("%f", &mark2);
 printf("Enter the marks for Subject 3: ");
 scanf("%f", &mark3);
 printf("Enter the marks for Subject 4: ");
 scanf("%f", &mark4);
 printf("Enter the marks for Subject 5: ");
 scanf("%f", &mark5);
 total = mark1 + mark2 + mark3 + mark4 + mark5;
 percentage = (total / 500) * 100;
 printf("\nTotal Marks: %.2f\n", total);
 printf("Percentage: %.2f%%\n", percentage);
 if (percentage >= 90 && percentage <= 100) { 
 printf("Grade: Outstanding\n");
 } else if (percentage >= 80 && percentage < 90) { 
 printf("Grade: Excellent\n");
 } else if (percentage >= 60 && percentage < 80) { 
 printf("Grade: First Division & Honors\n");
 } else if (percentage < 60) { 
 printf("Grade: Second Division\n");
 } else { 
 printf("Invalid marks entered.\n");
 } 
 return 0;
}