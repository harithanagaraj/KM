#include <stdio.h>
#include<conio.h>
 
int power(int, int);
 
int main()
{
   int n, sum = 0, temp, remainder, digits = 0;
 
   printf("Input an integer\n");
   scanf("%d", &n);
 
   temp = n;

   while (temp != 0) {
      digits++;
      temp = temp/10;
   }
 
   temp = n;
 
   while (temp != 0) {
      remainder = temp%10;
      sum = sum + power(remainder, digits);
      temp = temp/10;
   }
