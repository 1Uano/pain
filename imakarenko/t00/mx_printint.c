#include <unistd.h>
void mx_printchar(char c);

void mx_printint(int n)
{
    if (n == -2147483648)
    {
        char symbol = 45;
        write(1, &symbol, 1);
        char first_num = '2';
        write(1, &first_num, 1);
        mx_printint(147483648);
        return;
    }
    int is_minus = 0;
    if(n < 0)
    {
        n *= -1;
        is_minus = 1;
    }

    int num = n;
    int len = 1;

    while (num/10 != 0)
    {
        len += 1;
        num /= 10;
    }

    int nums[len];
    for (int i = 0; i < len; i++)
    {
        nums[i] = n%10;
        n /= 10;
    }

    if (is_minus)
        mx_printchar(45);

    for (int i = 0; i < len; i++)
    {
        mx_printchar(nums[len-1-i]+48);
    }
}
