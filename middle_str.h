#ifndef STR_MIDDLE_H_INCLUDED
#define STR_MIDDLE_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

long long itc_len(string str);
int itc_find_str(string str1, string str2);
string itc_slice_str(string str, int start, int endd);

bool itc_isDigit(unsigned char c);
unsigned char itc_toUpper(unsigned char c);
unsigned char itc_changeCase(unsigned char c);
bool itc_compare(string s1, string s2);

int itc_countWords(string str);
string itc_maxCharWord(string str);
char itc_sameChar(string str);
bool itc_isFirstInSecond(string s1, string s2);

string itc_Cezar(string str, int k);
string itc_rmFreeSpace(string str);
bool itc_isIp(string str);
string itc_DecToBin(string str);

string itc_decToBase(int num, int base);

long long str_int(string temp);


#endif // STR_MIDDLE_H_INCLUDED

