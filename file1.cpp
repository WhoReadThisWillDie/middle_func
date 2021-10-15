#include "middle.h"

void itc_num_print(int num1)
{
    cout << num1 << endl;
}

int itc_len_num(long long num1)
{
    int res = 1;
    num1 = itc_abs(num1);
    while (num1 / 10 > 0) {
        res += 1;
        num1 = num1 / 10;
    }
    return res;
}

long long itc_sum_num(long long num1)
{
    int res = 0;
    num1 = itc_abs(num1);
    while (num1 / 10 > 0) {
        res += num1 % 10;
        num1 = num1 / 10;
    }
    res += num1 % 10;
    return res;
}

long long itc_multi_num(long long num1)
{
    int res = 1;
    num1 = itc_abs(num1);
    while (num1 / 10 > 0) {
        res *= num1 % 10;
        num1 = num1 / 10;
    }
    res *= num1 % 10;
    return res;
}

int itc_max_num(long long num1)
{
    int res = 0;
    num1 = itc_abs(num1);
    while (num1 / 10 > 0) {
        if (res < num1 % 10)
            res = num1 % 10;
        num1 = num1 / 10;
    }
    if (res < num1 % 10)
    res = num1 % 10;
    return res;
}
