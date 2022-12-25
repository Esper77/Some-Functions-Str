#include "str_middle.h"

bool itc_isIp(string str)
{
    int check = 1;
    long long len = itc_len(str), wordcount = 1;
    for (int i = 0; i < len; ++i) {
        if ((str[i] >= '0') && (str[i] <= '9')) {
            check = check * 10 + str[i] - 48;
        }
        else {
            if ((str[i] != '.') || (check == 1) || (check % 1000 > 255) || (check % 1000 < 0))
                return 0;
            check = 1;
            wordcount++;
        }
    }
    if (wordcount != 4)
        return 0;
    return 1;
}

string itc_DecToBin(string str) {
    string temp = "", temp2 = "";
    long long temp_num = 0;
    for (long long i = 0; str[i] != '\0'; ++i) {
        if (str[i] < '0' || str[i] > '9') {
            temp2 += itc_decToBase(int_str(temp), 2) + str[i];
            temp = "";
        }
        if (itc_isDigit(str[i]))
            temp += str[i];
    }

    temp2 += itc_decToBase(int_str(temp), 2);
    return temp2;
}

string itc_decToBase(int num, int base) {
    string alph = "0123456789ABCDEF";
    string res = "";
    int tmp = 0;
    if (num < 0) {
        res = "-";
        num *= -1;
    }
    while (num > 0) {
        tmp = num % base;
        res += alph[tmp];
        num /= base;
    }
    return res;
}

int int_str(string str) {
    int ch = 0;
    long long str_num = 0;
    for (long long i = 0; str[i] != '\0'; ++i) {
        ch = str[i] - 48;
        str_num = str_num * 10 + ch;
    }
    return str_num;
}
