#include "middle_str.h"

string itc_decToBase(int num, int base){
    string alph = "0123456789ABCDEF";
    string res = "";
    int tmp = 0;
    if (num < 0){
        res = "-";
        num *= -1;
    }
    while(num > 0){
        tmp = num % base;
        res += alph[tmp];
        num /= base;
    }
    return res;
}

long long str_int(string temp){
    int ch = 0;
    long long temp_num = 0;
    for (long long i = 0; temp[i] != '\0'; ++i){
        ch = temp[i] - 48;
        temp_num = temp_num * 10 + ch;
    }
    return temp_num;
}
