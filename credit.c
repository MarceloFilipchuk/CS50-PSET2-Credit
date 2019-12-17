#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    long long number;
    // promts the user for the credit card number
    do
    {
        number = get_long("Number: ");
    }
    while (number <= 0);
    // checks if the credit card is an American Express
    if (number / 100000000000000 >= 3 && number / 100000000000000 < 4)
    {
        printf("AMEX\n");
    }
    // checks if the credit card is a Visa
    else if (number / 1000000000000000 >= 4 && number / 1000000000000000 < 5)
    {
        printf("VISA\n");
    }
    else if (number / 1000000000000 >= 4 && number / 1000000000000 < 5)
    {
        printf("VISA\n");
    }
    //  checks if the credit card is a Mastercard
    else if (number / 1000000000000000 >= 5 && number / 1000000000000000 < 6)
    {
        printf("MASTERCARD\n");
    }
    // prints the message "INVALID" because the credit card number is neither
    // from an American Express, Visa nor Mastercard
    else
    {
        printf("INVALID\n");
    }
    
}
