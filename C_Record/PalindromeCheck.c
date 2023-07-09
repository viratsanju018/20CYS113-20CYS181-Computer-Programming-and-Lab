#include <stdio.h>
#include <math.h>

int main()
{
    int num, reversed_num = 0, remainder, original_num;

   
    scanf("%d", &num);

    original_num = num;

    while (num != 0)
    {
        remainder = num % 10;
        reversed_num = reversed_num * 10 + remainder;
        num /= 10;
    }

    if (original_num == reversed_num)
    {
        printf("Is a palindrome.");
    }
    else
    {
        printf("Is not a palindrome.");
    }

    return 0;
}