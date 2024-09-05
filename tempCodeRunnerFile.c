// WAP to read 3 digit no. & find sum of square of digits.

#include <stdio.h>

int main()
{
    int number,
        hundreds, tens, ones,
        sum_of_squares;
     

   
        printf("Enter a 3-digit number: ");
        scanf("%d", &number);

        if (number >= 100 && number <= 999)
        {
            hundreds = number / 100;
            printf("hundreds = %d\n", hundreds);
            tens = (number / 10) % 10;
            printf("tens = %d\n", tens);
            ones = number % 10;
            printf("ones = %d\n", ones);

            sum_of_squares = (hundreds * hundreds) + (tens * tens) + (ones * ones);

            printf("The sum of the squares of the digits is: %d", sum_of_squares);

            
        }
        else
        {
            printf("Invalid input.");
        }
   

    return 0;
}