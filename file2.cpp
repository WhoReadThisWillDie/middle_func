#include "middle.h"

int itc_min_num(long long num1)
{
    int res = 9;
    num1 = itc_abs(num1);
    while (num1 / 10 > 0) {
        if (res > num1 % 10)
            res = num1 % 10;
        num1 = num1 / 10;
    }
    if (res > num1 % 10)
    res = num1 % 10;
    return res;
}

long long itc_rev_num(long long num1)
{
    num1 = itc_abs(num1);
    long long res = 0;
    long long i = itc_len_num(num1) - 1;
    while (num1 / 10 > 0) {
        res += (num1 % 10) * itc_pow(10, i);
        i--;
        num1 = num1 / 10;
   }
   res += (num1 % 10) * itc_pow(10, i);
   return itc_len_num(res);
}

int itc_null_count(long long num1)
{
    int res = 0;
    num1 = itc_abs(num1);
    if (num1 == 0)
        return 1;
    while (num1 / 10 > 0) {
        if (num1 % 10 == 0) {
            res += 1;
        }
        num1 = num1 / 10;
    }
    return res;
}

bool itc_mirror_num(long long num1)
{
    num1 = itc_abs(num1);
    int num2 = num1;
    int res = 0;
    int i = itc_len_num(num1) - 1;
    while (num1 / 10 > 0) {
        res += (num1 % 10) * itc_pow(10, i);
        i--;
        num1 = num1 / 10;
   }
    res += (num1 % 10) * itc_pow(10, i);
    if (num2 == res)
        return true;
    return false;
}

int itc_mirror_count(long long num1)
{
    num1 = itc_abs(num1);
    int res = 0;
    for (int i = 1; i <= num1; i++) {
        if (itc_mirror_num(i))
            res ++;
    }
    return res;
}
