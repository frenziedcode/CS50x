#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int convert(string inputn, int n);

int main(void)
{
    string input = get_string("Enter a positive integer: ");
    int n = strlen(input);

    for (int i = 0; i < n; i++)
    {
        if (!isdigit(input[i]))
        {
            printf("Invalid Input!\n");
            return 1;
        }
    }

    // Convert string to int
    printf("%i\n", convert(input, n - 1));
}

int convert(string input, int n)
{
    // TODO
    if (n < 0 || input[n] < '0' || input[n] > '9')
    {
        return 0;
    }

    return (10 * convert(input, strlen(input) - 1) + (input[n] - '0'));
}