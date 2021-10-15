#include "middle.h"

int itc_rev_oct_num(long long num1)
{
    int res = 0;
    int i = 0;

    while (num1 / 10 > 0) {
        if (num1 % 10 > 0 ){
            res += itc_pow(8, i) * (num1 % 10);
        }
        i++;
        num1 = num1 / 10;
    }
    if (num1 > 0){
        res += itc_pow(8, i) * (num1 % 10);
    }
    return res;
}

int itc_covert_num(long long num1, int ss)
{
    long res = 0;
    long i = 1;
    while(num1)
    {
        res += (num1 % ss) * i;
        num1 = num1 / ss;
        i = i * 10;
    }
    return res;
}

int itc_rev_covert_num(long long num1, int ss)
{
    int res = 0;
    int i = 0;

    while (num1 / 10 > 0) {
        if (num1 % 10 > 0 ){
            res += itc_pow(ss, i) * (num1 % 10);
        }
        i++;
        num1 = num1 / 10;
    }
    if (num1 > 0){
        res += itc_pow(ss, i) * (num1 % 10);
    }
    return res;
}
