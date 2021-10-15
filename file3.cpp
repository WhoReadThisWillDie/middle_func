#include "middle.h"

int itc_second_max_num(long long num1)
{
    int max1 = 0;
    int max2 = 0;
    num1 = itc_abs(num1);
    if (num1 < 10)
        return -1;
    max1 = num1 % 10;
    num1 = num1 / 10;
    while (num1 / 10 > 0) {
        if (num1 % 10 > max2){
            if (num1 % 10 > max1) {
                max2 = max1;
                max1 = num1 % 10;
            } else
                max2 = num1 % 10;
        }
        num1 = num1 / 10;
    }
    if (num1 % 10 > max1) {
                max2 = max1;
                max1 = num1 % 10;
            } else
                max2 = num1 % 10;
    return max2;
}

int itc_second_simple_max_num(long long num1)
{
    int max1 = itc_max_num(num1);
    int max2 = itc_second_max_num(num1);
    if (max1 == max2)
        return -1;
    return max2;
}

long long itc_bin_num(long long num1)
{
    long res = 0;
    long i = 1;
    while(num1)
    {
        res += (num1 % 2) * i;
        num1 = num1 / 2;
        i = i * 10;
    }
    return res;
}

long long itc_oct_num(long long num1)
{
    long res = 0;
    long i = 1;
    while(num1)
    {
        res += (num1 % 8) * i;
        num1 = num1 / 8;
        i = i * 10;
    }
    return res;
}

int itc_rev_bin_num(long long num1)
{
    int res = 0;
    int i = 0;

    while (num1 / 10 > 0) {
        if (num1 % 10 > 0 ){
            res += itc_pow(2, i);
        }
        i++;
        num1 = num1 / 10;
    }
    if (num1 > 0){
        res += itc_pow(2, i);
    }
    return res;
}
