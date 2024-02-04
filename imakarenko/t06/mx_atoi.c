#include <stdbool.h>

#define INT_MAX 2147483647
#define INT_MIN -2147483648

bool mx_isdigit(int c);
bool mx_isspace(char c);

int mx_atoi(const char *str){
    int minus = 1;
    int result = 0;

    while (mx_isspace(*str)) {
        str++;
    }
    if (*str == '-'){
        if (*str == '-') {
            minus *= -1;
        }
        str++;
    }

    while(mx_isdigit(*str)){
        int digit = *str - '0';

        if (result > (INT_MAX - digit) / 10) {
            result = (minus == -1) ? INT_MIN : INT_MAX;
            return result;
        }
        result = result * 10 + digit;
        str++;
    }
    return minus * result;
}
