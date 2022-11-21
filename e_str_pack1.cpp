#include <iostream>
#include "str_easy.h"
using namespace std;

string itc_hello_str(string name){
    return "Hello, " + name;
}

long long itc_len(string str){
    long long counter = 0;
    for (long long i = 0; str[i] != '\0'; i++){
    counter++;
    }
    return counter;
}

void itc_print_copy_str(string str, int number){
    for (int i = 0; i < number; i++)
        cout << str;
}
