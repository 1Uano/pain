#include <stdio.h>
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);
int mx_strncmp(const char *s1, const char *s2, int n);
char *mx_strstr(const char *s1, const char *s2);
int mx_count_substr(const char *str, const char *sub) {
    if (mx_strlen(sub) == 0) {
        return 0;
    }
    int count = 0;
    while ((str = mx_strstr(str, sub)) != NULL) {
        count++;
        str += mx_strlen(sub);
    }
    return count;
}
