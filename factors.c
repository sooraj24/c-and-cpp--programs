/* This is the program to find the factors of the given number */

#include <stdio.h>
int main()
{
 int a,i;
 printf("enter the number :");
 scanf("%d", &a);
 printf("the factors of number %d is ",a);
  for (i=1; i<=a; ++i)
 {
  if (a % i == 0)
   {
   printf("%d \t", i);
   }
 }
 return (0);
}
