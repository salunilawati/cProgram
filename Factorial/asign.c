//WAP to find square of number and add them
#include <stdio.h>

#include <stdio.h>
int main()
{
  int num, sum = 0;
  int remainder;
  printf("Enter a number: ");
  scanf("%d", &num);
  while (num != 0)
  {
    remainder = num % 10;
    sum = sum + remainder * remainder;
    num = num / 10;
  }
  printf("Sum of square of digits is: %d\n", sum);
  return 0;
}