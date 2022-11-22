#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(void)

{

    string number = get_string("Credit Card: ");

    long len = strlen(number); // Finding the length of the string
    long n = atol(number); // Turning string to a number to make the calculations

    int odd = 2;
    long find_num = 0;
    int firstdigits = 0;
    int sum = 0;
    int lastdigit;
    int even = 1;
    long num = 0;
    int res = 0;
    int evensum = 0;
    int total = 0;
    int final = 0;
    int allsum = 0;
    int bignum = 0;
    long anum;
    long othernum;
    long g = pow(10, len - 2);

    while (odd <= len)
    {
        long p = pow(10, odd);
        anum = pow(10, odd - 2);

        odd += 2;

        find_num = (n % p / anum / 10); // To find every other digit, starting with the number’s second-to-last digit
        res = find_num * 2;

        if (res < 9)
        {
            allsum += res; // Adding digits together
        }

        if (res > 9)
        {
            bignum = res / 10 + res % 10; // Separating number to digits
            sum += bignum; // Adding digits together because they are bigger than 9
        }

    }

    final = allsum + sum; // Adding all digits together

    while (even <= len)
    {
        long j = pow(10, even);
        othernum = pow(10, even - 1);
        even += 2;
        num = (n % j / othernum); // To find every other digit, starting with the number’s last digit
        evensum += num; // Adding digits together
        total = evensum + final; // Adding all digits that we find in the alghorithm


    }
    firstdigits = n / g; // Finding first digit of the given number
    lastdigit = total % 10; // Finding last digit of the given number

    if (lastdigit != 0)
    {
        printf("INVALID\n");
    }

    else if (firstdigits / 10 == 4 && len > 12)
    {
        printf("VISA\n");
    }
    else if (firstdigits == 34 || firstdigits == 37)
    {
        printf("AMEX\n");
    }
    else if (firstdigits == 51 || firstdigits == 52 || firstdigits == 53 || firstdigits == 54 || firstdigits == 55)
    {
        printf("MASTERCARD\n");
    }
    else if (len < 13 || firstdigits / 10 != 4 || firstdigits != 34 || firstdigits != 37 || firstdigits != 51 || firstdigits != 52
             || firstdigits != 53 || firstdigits != 54 || firstdigits != 55)
    {
        printf("INVALID\n");
    }



}

