#include "middle_str.h"
#include <iostream>
#include <string>



bool itc_isDigit(unsigned char c)
{
    return((c >= 48) && (c <= 57));
}

unsigned char itc_toUpper(unsigned char c) {
    if (c >= 97 && c <= 122) return c - 32;
    return c;
}


unsigned char itc_changeCase(unsigned char c) {
    if (c <= 'z' && c >= 'a')
        return c - ' ';
    else if (c <= 'Z' && c >= 'A')
        return c + ' ';
    else
        return c;
}

bool itc_compare(string s1, string s2) {
    for (long long i = 0; i <= itc_len(s1); i++) {
        if (s1[i] != s2[i]) {
            return false;
            break;
        }

    }
    return true;
}

int itc_countWords(string str)
{
    int c = 0;
    bool flag = true;
    for (long long i = 0; str[i] != '\0'; ++i)
    {
        if ((str[i] < 65 || (str[i] > 90 && str[i] < 97) || str[i] > 122) && str[i] != ' ')
            flag = false;

        if (str[i] == ' ' && flag == true)
            c += 1;
        if (str[i] == ' ' && flag == false)
            flag = true;
    }
    if (flag == false)
        return c;

    return c + 1;
}
